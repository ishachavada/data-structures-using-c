#include <stdio.h>
#include <string.h>

void main()
{
    int i, j;
    char temp[10];
    char name[5][10];
    char list[5][10];
    printf("Enter name: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%s", name[i]);
    }
    printf("\nUnsorted list: ");
    for (i = 0; i < 5; i++)
        printf("%s\n", name[i]);
    for (i = 0; i < 5; i++)
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    printf("\nSorted list: ");
    for (i = 0; i < 5; i++)
        printf("%s\n", name[i]);
}