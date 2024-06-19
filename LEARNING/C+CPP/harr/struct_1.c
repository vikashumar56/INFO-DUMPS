#include <stdio.h>
struct Student
{
    int id;
    int marks;
    int fav_char;
};

int main()
{
    struct Student name1, name2, name3;
    name1.id = 1;
    name2.id = 2;
    name3.id = 3;
    name1.marks = 499;
    name2.marks = 400;
    name3.marks = 450;
    name1.fav_char = 'a';
    name2.fav_char = 'L';
    name3.fav_char = 'G';
    printf("name1's fav character is : %c\n", name1.fav_char);
    printf("name2 got %d marks in the exam", name2.marks);
    return 0;
}
