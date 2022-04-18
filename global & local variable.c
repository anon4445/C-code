#include <stdio.h>
#include <stdlib.h>

int i = 5; // global variable

int main()
{
    int a; // local variable

    scanf("%d,&a");

    printf("%d is local variable and %d is global variable",a,i);

    return 0;
}
