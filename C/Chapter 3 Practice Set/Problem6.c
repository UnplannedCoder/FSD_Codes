#include <stdio.h>

int main() {
    int num1, num2, num3, num4, greatest;
    printf("Enter four numbers: ");
    scanf("%d,%d,%d,%d", &num1, &num2, &num3, &num4);

    // Assume the first number is the greatest
    greatest = num1;

    // Compare with the second number
    if (num2 > greatest) {
        greatest = num2;
    }

    // Compare with the third number
    if (num3 > greatest) {
        greatest = num3;
    }

    // Compare with the fourth number
    if (num4 > greatest) {
        greatest = num4;
    }

    // Print the greatest number
    printf("The greatest number is: %d\n", greatest);

    return 0;
}