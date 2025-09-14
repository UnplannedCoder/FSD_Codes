#include <stdio.h>
int main()
{
    int i = 0; // initialization outside the loop
    while (i < 10)
    { // condition checking
        printf("Hello, World!\n");
        i++; // updation inside the loop
    }
}