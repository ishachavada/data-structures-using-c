// Tow of Hanoi.
// transfer one disk at a time.
// can't place bigger disk on smaller disk.

// Rules:
// 1.(n-1)-->source-->temp and treat D as T.
// 2.nth disk: S--->D transfer.
// 3.T-->D, and treat source as temp.

#include <stdio.h>

void TOH(int n, char S, char T, char D)
{
    if (n > 0)
    {
        TOH(n - 1, S, D, T);
        printf("\nTransfer %d disk from %c to %c", n, S, D);
        TOH(n - 1, T, S, D);
    }
}
void main()
{
    int n;
    printf("enter no of disk: ");
    scanf("%d", &n);
    TOH(n, 'S', 'T', 'D');
}
