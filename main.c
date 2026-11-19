#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[30];  
    float grade;
};

int main(void) 
{
    struct student s1={100, "nayeon", 4.3};

    s1.id = 101;
    strcpy(s1.name, "minji");
    s1.grade = 4.2;
    printf("id:%i, name:%s, grade:%.1f\n", s1.id, s1.name, s1.grade);
    return 0;
}