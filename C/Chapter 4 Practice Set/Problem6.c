#include<stdio.h>
int main() {
    int n,i,sum=0;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d", n, i, n * i);
        sum+=(n*i);
        printf("\n");
    }
    printf("sum is %d",sum);
    return 0;
}