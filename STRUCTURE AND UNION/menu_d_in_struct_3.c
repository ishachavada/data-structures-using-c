#include <stdio.h>
#include <string.h>
int i = 0;
struct student
{
    int id;
    char name[20];
    float marks;
};

void read(struct student s[], int n)
{
    for (i = 0; i < n; i++)
    {

        printf("enter student %d details: \n", i + 1);
        printf("Student ID: ");
        scanf("%d", &s[i].id);

        printf("Student Name: ");
        scanf("%s", &s[i].name);

        printf("Student Marks: ");
        scanf("%f", &s[i].marks);
    }
}

void ShowAll(struct student s[], int n)
{
    printf("\nStudent details:\n\nId\t|\t\tName\t\t|\tMarks\n");

    printf("--------------------------------------------------------");
    for (i = 0; i < n; i++)
    {
        printf("\n%d\t|\t\t%s\t\t|\t%.2f\n", s[i].id, s[i].name, s[i].marks);
    }
}

int l_search(struct student s[], int n, char search_name[])
{
    for (i = 0; i < n; i++)
    {
        if (strcmp(s[i].name, search_name) == 0)
        {
            ShowOne(s,i);
        }
    }
}

void ShowOne(struct student s[], int i)
{
    printf("\nStudent details:\n\nId\t|\t\tName\t\t|\tMarks\n");

    printf("--------------------------------------------------------");

    printf("\n%d\t|\t\t%s\t\t|\t%.2f\n", s[i].id, s[i].name, s[i].marks);
}

void sort(struct student s[], int n)
{
    int temp;
    for (i = 0; i < n; i++)
        if (s[i].id > s[i + 1].id)
        {
            temp = s[i].id;
            s[i].id = s[i + 1].id;
            s[i + 1].id = temp;
        }

    printf("\nSorted data: \n");
    ShowAll(s, n);
}

void main()
{
    struct student s[10];
    int n, op;
    printf("enter the no. of students: ");
    scanf("%d", &n);

    do
    {
        printf("\n\nEnter the operation you want to perform\n1.Read\t\t2.Show\t\t3.Search\t\t4.Sort\t\t5.Update\t\t6.Exit\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            read(s, n);
            break;
        case 2:
            ShowAll(s, n);
            break;
        case 3:
        {
            int i;
            char search_name[20];
            printf("\nEnter the name you wanna search for: ");

            scanf("%s", &search_name[i]);
            l_search(s, n, search_name);
        }
        break;
        case 4:
        {
            sort(s, n);
        }
        break;
        case 6:
            printf("Exiting...");
            break;
        default:
            printf("\nNot a valid case.");
        }
    } while (op != 6);
}