#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
int main()
{
    struct Student s1;
    s1.id = 1;
    s1.marks = 45;
    s1.fav_char = 't';
    strcpy(s1.name, "name1");
    printf("The name of s1 is  %s\n", s1.name);
    printf("The id is %d\n", s1.id);
    printf("Marks of s1 are %d\n", s1.marks);
    printf("The fav character of s1 is %c\n", s1.fav_char);

    return 0;
}
