#include <stdio.h>
struct student
{
    int sid;
    char sname[20];
    float smarks;
};

void main()
{
    struct student s;
    printf("enter student details: \n");
    printf("Student ID: ");
    scanf("%d", &s.sid);

    printf("Student Name: ");
    scanf("%s", &s.sname);

    printf("Student Marks: ");
    scanf("%f", &s.smarks);

    printf("Student details: \nID: %d\nName: %s\nMarks: %.1f", s.sid, s.sname, s.smarks);
}