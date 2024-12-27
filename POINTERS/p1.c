#include <stdio.h>
void main()
{
    int ivar = 4;
    char cvar = 'a';
    double dvar = 568.25;

    int *i;
    char *c;
    double *d;
    i = &ivar;
    c = &cvar;
    d = &dvar;

    printf("content: \n");
    printf("int var: %d\n", *i);
    printf("char var: %c\n", *c);
    printf("double var: %lf\n", *d);

    printf("address: \n");
    printf("int var: %d\n", i);
    printf("char var: %c\n", c);
    printf("double var: %lf\n", d);
}
