#include <stdio.h>
#include <stdlib.h>

void sort(int *p, int size)
{
    int i, j, min;
    int temp;
    for (i = 0; i < size; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (*(p + j) < *(p + min))
            min=j;
        }
        if(min!=i){
            temp=*(p+i);
            *(p+i)=*(p+min);
            *(p+min)=temp;

        }
    }
}

int b_search(int *p, int size, int num)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {

        int mid = (low + high) / 2;
        if (num == *(p + mid))
            return mid;
        else if (num < *(p + mid))
            high = mid - 1;
        else if (num > *(p + mid))
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int *p, num, size, i, b;
    printf("enter array size: ");
    scanf("%d", &size);
    p = (int *)malloc(sizeof(int) *size);
    printf("enter array elements: ");
    for (i = 0; i < size; i++)
        scanf("%d", (p + i));


    sort(p,size);
   printf("\nSorted array elements: ");
    for (i = 0; i < size; i++)
        printf("%d\t", *(p + i));  

    printf("\nEnter the element you want to search: ");
    scanf("%d", &num);

    b = b_search(p, size, num);
    if (b != -1)
        printf("element found");
    else
        printf("element not found");
}