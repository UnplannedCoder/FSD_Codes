//prime number is a number which is only divisible by 1 and itself

#include <stdio.h>

int main() {
    int num,prime = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=2;i<num;i++){
        if (num % i==0) {
            prime = 1;}
    }
    if (prime)
        printf("%d is not a prime number.", num);
    else
        printf("%d is a prime number.", num);
    return 0;
}

