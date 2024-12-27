#include <stdio.h>
char read_name(char arr[])
{
    printf("enter name: ");
    gets(arr);
}
void main()
{
    char arr[50];
    read_name(arr);
    printf("Name: %s", arr);
}