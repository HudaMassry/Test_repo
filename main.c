#include <stdio.h>
#include <stdlib.h>
#include"sum.h"
int main()
{ int x=9;
int y=8;
    printf("the sum is %d\n", sum(x,y));
    printf("Even=%d, odd=%d\n",!Is_Even(x),Is_Even(x));
    printf("the div is %d\n", div_a(x,y));

    return 0;
}
