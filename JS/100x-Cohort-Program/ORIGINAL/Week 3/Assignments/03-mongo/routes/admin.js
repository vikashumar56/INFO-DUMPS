const express = require('express');
const adminMiddleware = require("../middleware/admin");
const router = express.Router();
const {Admin, Course} = require("../db/index");
const bcrypt = require('bcrypt');

// Admin Routes
router.post('/signup', async (req, res) => {
    // Implemented admin creation logic

    const {username, password} = req.body;

    //checking if username already exists
    const existingUser = await Admin.findOne({username});
    if(existingUser){
        res.status(400).json({message: "Username already exists"});
        return;
    }else{
        //hashing the password, so it can be stored in mongoDB
        const hashedPassword = await bcrypt.hash(password, 10);
        //creating the admin
        await Admin.create({username, password: hashedPassword});
        res.status(200).json({message: "Admin created successfully"});
    }

});

router.post('/courses', adminMiddleware, async (req, res) => {
    // Implemented course creation logic
    const {title, description, price, imageLink} = req.body;

    //creating the course
    const course = await Course.create({title, description, price, imageLink});

    //adding the course reference to admin's courses array
    const admin = await Admin.findOne({username: req.headers.username});
    admin.courses.push(course._id);
    await admin.save();

    res.status(200).json({message: "Course created successfully", courseId: course._id});
});

router.get('/courses', adminMiddleware, async (req, res) => {

    // Implemented course fetching logic for admin
    let courses = [];
    const admin = await Admin.findOne({username: req.headers.username});
    for(let courseId of admin.courses){
        const course = await Course.findById(courseId);
        courses.push({...course._doc, published: true});
    }

    return res.status(200).json({ courses: courses });

});

module.exports = router;