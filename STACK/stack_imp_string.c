#include <stdio.h>
#include <string.h>

#define max 10
char Stack[max][10];
int top;

void init()
{
    top = -1;
}

int underflow()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int overflow()
{
    if (top == (max - 1))
        return 1;
    else
        return 0;
}

void PUSH(char x[])
{
    int i;
    if (overflow() == 1)
        printf("overflow");
    else
        strcpy(Stack[++top], x);
}

void POP()
{
    char x[10];
    if (underflow() == 1)
        printf("underflow");
    else
        strcpy(x, Stack[top--]);
    printf("Popped value: %s\n", x);
}

void Display()
{
    int i;
    if (overflow() == 1)
        printf("overflow");
    else
    {
        for (i = top; i >= 0; i--)
            printf("%s\n", Stack[i]);
        printf("\n");
    }
}


void main()
{
    int n;
    char pu[10];
    char po;
    do
    {
        printf("\n1.Init\t\t2.Underflow\t\t3.Overflow\t\t4.Push\n5.Pop\t\t6.Display\t\t7.Exit\nChoose one: ");
        scanf("%d", &n);
        printf("\n");
        switch (n)
        {
        case 1:
            init();
            printf("Top initalized.\n");
            break;
        case 2:
        {
            if (underflow() == 1)
                printf("Underflow\n");
            else
                printf("Not underflow\n");
        }
        break;
        case 3:
        {
            if (overflow() == 1)
                printf("Overflow\n");
            else
                printf("Not Overflow\n");
        }
        break;
        case 4:
        {
            printf("\nEnter the string: ");
            scanf("%s", &pu);
            PUSH(pu);
        }
        break;
        case 5:
            POP();
            break;

        case 6:
            Display();
            break;
        case 7:
            printf("\nExiting....");
            break;
        default:
            printf("\nInvalid option.");
            break;
        }
    } while (n != 7);
}
