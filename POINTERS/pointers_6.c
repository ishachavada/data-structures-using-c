#include <stdio.h>
#include <string.h>
void main()
{
    // Array of string pointers
    int i, j;
    char *temp;
    char *p[3] = {
        "isha",
        "abhivyakti",
        "radha"};
    

    // Print original array
    printf("Unsorted array:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", *(p + i));
    }

    // Sort the strings
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (strcmp(*(p + i), *(p + j)) > 0)
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    // Print sorted array
    printf("\nSorted array of strings:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", *(p + i));
    }
}
