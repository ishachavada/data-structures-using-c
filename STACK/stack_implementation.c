#include <stdio.h>

#define max 10
int Stack[max];
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

void PUSH(int x)
{
    if (overflow() == 1)
        printf("overflow");
    else
        Stack[++top] = x;
}

int POP()
{
    int x;
    if (underflow() == 1)
        printf("underflow");
    else
        x = Stack[top--];
    return x;
}

void Display()
{
    int i;
    if (overflow() == 1)
        printf("overflow");
    else
    {
        for (i = top; i >= 0; i--)
            printf("%d\t", Stack[i]);
        printf("\n");
    }
}

int size()
{
    return top+1;
}

void main()
{
    int n, pu, po,s;
    do
    {
        printf("\n1.Init\t\t2.Underflow\t\t3.Overflow\t4.Push\n5.Pop\t\t6.Display\t\t7.Size\t\t8.Exit\n\nchoose one:");
        scanf("%d", &n);
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
            printf("\nEnter the number you would like to push onto the stack: ");
            scanf("%d", &pu);
            PUSH(pu);
        }
        break;
        case 5:

            po = POP();
            printf("\nPopped value: %d", po);
            break;

        case 6:
            Display();
            break;
        case 7:
            s=size();
            printf("Size: %d",s);
            break;
        case 8:
            printf("\nExiting....");
            break;
        default:
            printf("Invalid option.");
            break;
        }
    } while (n != 7);
}
