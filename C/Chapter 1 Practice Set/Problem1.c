#include<stdio.h>
int main() {
    int length,breadth,area;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d,%d", &length, &breadth);
    area = length * breadth;
    printf("Area of the rectangle is: %d\n",area);
    return 0;
}