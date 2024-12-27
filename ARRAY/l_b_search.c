#include <stdio.h>
int lsearch(int arr[], int size, int num)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
            return 1;
    }

    return 0;
}
int bsearch(int arr[], int size, int num)
{
    int low = 0, high = size-1;
    while (low <= high)
    {

        int mid = (low + high) / 2;
        if (num == arr[mid])
            return mid;
        else if (num < arr[mid])
            high = mid - 1;
        else if (num > arr[mid])
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[10], num, size, i, l, b;
    printf("enter array size: ");
    scanf("%d", &size);

    printf("enter array elements: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("enter the element you want to search for: ");
    scanf("%d", &num);
    b = bsearch(arr, size, num);
    if (b!=-1)
        printf("element found");
    else
        printf("element not found");
}