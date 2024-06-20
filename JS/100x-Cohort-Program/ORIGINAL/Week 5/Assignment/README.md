## Week 5 Assignment Solution 


https://github.com/its-id/100x-Cohort-Programs/assets/60315832/18b85a88-901f-4c53-abea-e0b38b7b5ef0


### Covers Advanced areas
- Authentication & Control authorization (more details below).
- Written in TS

### Backend Checklist:
- Type validation using zod
- Authentication & session management handled
- **View controls**
   - user can only see his/her cards.
   - admin can see everyone’s cards.
- **CRUD controls**
   - user can create but not update or delete.
   - Only admin can create, update, delete anyone's card.

### Frontend Checklist:
- Setup component structure
- UI created from scratch, no third party libraries used.
- **Missing**: State management using context or third party tools



### Assignment given initially
You have to create a simple React App which has a reusable Card Component which has the following
 - Ability to pass in props to the Component
 - The Card must show a person's
    - Name
    - A short description
    - LinkedIn, Twitter and other Social Media Handle buttons
    - Interests Section
 - You can assume that this is kind of an e-business card and feel free to put in your creativity
 - Additional & Slightly advanced:
    - Create a page where you can add these kind of Cards by taking input from the user
    - Create a backend server where these cards get stored in a DB and can handle basic CRUD operations
    - Give the feature to perform CRUD operations from the frontend (Can be restricted to the admin only as well)
