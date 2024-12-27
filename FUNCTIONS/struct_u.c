#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    int marks;
};

void read_struct(struct student *s)
{
    printf("Enter student roll: ");
    scanf("%d", &s->roll);
    printf("Enter student name: ");
    scanf("%s", &s->name);
    printf("Enter student marks: ");
    scanf("%d", &s->marks);
}
void print_struct(struct student s)
{
    printf("student roll: %d\n", s.roll);
    printf("student name: %s\n", s.name);
    printf("student marks: %d\n", s.marks);
}
void main()
{
    struct student s;
    read_struct(&s);
    print_struct(s);
}