#include <stdio.h>
int main()
{   // executes the block of code atleast once and then checks the condition
    int i = 0;
    do
    {
        printf("Hello, World!\n");
        i++;
    } while (i < 10);
    return 0;
}