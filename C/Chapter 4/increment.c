#include <stdio.h>
int main()
{
    int a = 5;
    printf("The value of a is:%d\n", a++); // Post-increment=pehle use hogi fir increment hogi
    printf("The value of a is:%d\n", ++a); // Pre-increment=pehle increment hogi fir use hogi
    // i+=2 is equivalent to i=i+2
    return 0;
}