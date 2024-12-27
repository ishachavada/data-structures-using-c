#include <stdio.h>
#include <string.h>
void main()
{
    
    char str[80] = "banatsthali uni is located near jaipur";
    char str1[20] = "jaipur";
    int i=0,j=0;
    // for (int i = 0, j = 0; str[i] != '\0'; i++, j++)
    // {
        // int j=0;

        // if(str[i]==str1[j]){
        //         j++;
        // }else{
        //     i=i-j;
        //     j=0;
        //     if(j==strlen(str1))

        // }
        //  i++;

        while (str[i] && str1[j])
        {
            if (str[i] == str1[j])
                j++;
            else
            {
                i = i - j;
                j = 0;
            }
            i++;
        }
        (j == strlen(str1))
            ? printf("substring found at position: %d\n",i-j)
            : printf("substring not found.\n");
    }
