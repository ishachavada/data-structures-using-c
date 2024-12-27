#include <stdio.h>
#define max 20
char Stack[max];
int top = -1;

void push(char ch)
{
    if (top == (max - 1))
        printf("overflow");
    else
    {
        Stack[++top] = ch;
    }
}

void Display()
{
    int i;
    if (top == -1)
        printf("underflow");
    else
    {
        for (i = top; i >= 0; i--)
            printf("%c", Stack[top--]);
    }
}
void main()
{
    char str[20];
    int i;
    printf("Enter the string: \n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
        push(str[i]);

    Display();
}