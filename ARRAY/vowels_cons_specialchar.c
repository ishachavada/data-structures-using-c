#include <stdio.h>
void main()
{

    int a = 0, b = 0, c = 0, i;
    char A[10];
    printf("enter string: ");
    gets(A);
    // for (int i = 0; i < 5; i++)
    // {
    //     if (A[i] == 'a' || A[i] == 'A' || A[i] == 'e' || A[i] == 'E' || A[i] == 'i' || A[i] == 'I' || A[i] == 'o' || A[i] == 'O' || A[i] == 'U' || A[i] == 'u')
    //     {
    //         a++;
    //     }
    //     else if (A[i] == '!' || A[i] == '@' || A[i] == '#' || A[i] == '$' || A[i] == '^')
    //     {
    //         b++;
    //     }
    //     else if ((A[i] >= 'a' && A[i] <= 'z') && (A[i] != 'a' || A[i] != 'A' || A[i] != 'E' || A[i] != 'e' || A[i] != 'I' || A[i] != 'i' || A[i] != 'O' || A[i] != 'o' || A[i] != 'U' || A[i] != 'u'))
    //     {
    //         c++;
    //     }
    // }
    for (i = 0; i < 10; i++)
    {
        if ((A[i] >= 'a') && (A[i] <= 'z'))
        {
            if (A[i] == 'a' || A[i] == 'A' || A[i] == 'e' || A[i] == 'E' || A[i] == 'i' || A[i] == 'I' || A[i] == 'o' || A[i] == 'O' || A[i] == 'U' || A[i] == 'u')
            {
                a++;
            }
            else
                c++;
        }
         else if (A[i] == '!' || A[i] == '@' || A[i] == '#' || A[i] == '$' || A[i] == '^')
        {
            b++;
        }
        
    }
    printf("\nvowels: %d", a);
    printf("\nconsonants: %d", c);
    printf("\nspecial characters: %d", b);
}