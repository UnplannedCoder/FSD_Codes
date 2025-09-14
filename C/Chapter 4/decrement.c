#include <stdio.h>
int main()
{
    int i = 5;
    printf("The value of i is:%d\n", i--); // Post-decrement=pehle use hogi fir decrement hogi
    printf("The value of i is:%d\n", --i); // Pre-decrement=pehle decrement hogi fir use hogi
    // i-=2 is equivalent to i=i-2
    return 0;
}