#include <stdio.h>
#include <string.h>
typedef struct User
{
    char name[25];
    float gpa;
} user;

int main()
{
    // type def= resrrved keyword that gives an existing datatype a nickname
    user user1 = {"Ryan", 3.0};
    user user2 = {"Ali", 4.0};
    user user3 = {"Ahmed", 3.9};

    user students[] = {user1, user2, user3};

    for(int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        printf("%s", students[i].name);
    }
}