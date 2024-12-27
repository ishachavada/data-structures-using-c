#include <stdio.h>
#include <ctype.h>

#define MAX 20
char Stack[MAX];
int top = -1;

// precedence function
int pr(char x)
{
    switch (x)
    {
    case '^':
        return 9;
        break;
    case '*':
        return 7;
        break;
    case '/':
        return 7;
        break;
    case '+':
        return 5;
        break;
    case '-':
        return 5;
        break;
    }
}

void main()
{
    char In[30], Post[30];
    int i, k, j = 0;
    char ch;
    printf("Enter the expression: \n");
    // for (i = 0; i < In[i] != '\0'; i++)
    gets(In);
    strrev(In);

    for (i = 0; (In[i] != '\0'); i++)
    {
        ch = In[i];
        if (isalpha(ch))
            Post[j++] = ch; // POSTFIX push Operation

        // else if (ch == '(')
        //     Stack[++top] = ch;
        // else if (ch == ')')
        // {
        //     while (Stack[top] != '(')
        //         Post[j++] = Stack[top--];
        //     top--;
        // }
        else
        {
            for (k = top; (k >= 0 && pr(ch) < pr(Stack[k])); k--) // STACK push operation
                Post[j++] = Stack[top--];

            Stack[++top] = ch;
        }
    }

    while (top > -1)
        Post[j++] = Stack[top--];

    Post[j] = '\0'; // cuz out post size is 30, it will print the garbage value of the rest of the under indexes, so we are terminating the string with null char so it will only print the output we need.
    strrev(Post);
    puts(Post);
}