#include <stdio.h>

#define max 10
int LQ[max];
int F,R;

void init()
{
    F = -1;
    R = -1;
}

int underflow()
{
    if (F == -1)
        return 1;
    else
        return 0;
}

int overflow()
{
    if (R == (max - 1))
        return 1;
    else
        return 0;
}

void Enqueue(int x)
{
    if (R==(max-1))
        printf("overflow");
    else
        if(R==-1)
        F=R=0;
        else
        R++;
        LQ[R]=x;
}

int Dequeue()
{
	int x;
    if (F==-1)
        printf("underflow");
    else{
    	x=LQ[F];
		if(F==R)
		init();
		else
		F++;
		
		return x;
	}
        
        
}

void Display()
{
    int i;
    if (F == -1)
        printf("Queue is empty.");
    else
    {
        for (i = F; i <=R; i++)
            printf("%d\t", LQ[i]);
    }
}

int size()
{
    return R-F+1;
}

void main()
{
    int n, en, de,s;
    do
    {
    	printf("\n-------------------------------------------------------------------------------------------------------\n");
        printf("\n1.Init\t\t2.Underflow\t3.Overflow\t4.Enqueue\n5.Dequeue\t6.Display\t7.Size\t\t8.Exit\n\nchoose one:");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            init();
            printf("Initalized.\n");
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
            printf("\nEnter the number: ");
            scanf("%d", &en);
            Enqueue(en);
        }
        break;
        case 5:
            de = Dequeue();
            printf("\nvalue: %d", de);
            break;

        case 6:
        	printf("Elements:\n");
            Display();
            break;
        case 7:
            s=size();
            printf("Size: %d\n",s);
            break;
        case 8:
            printf("\nExiting....");
            break;
        default:
            printf("Invalid option.");
            break;
        }
    } while (n != 8);
}
