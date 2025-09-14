#include <stdio.h>

int main() {
    float principle, rate, simpleInterest;
    int years;
    
    printf("Enter the principle amount: ");
    scanf("%f", &principle);

    printf("Enter the number of years: ");
    scanf("%d", &years);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    simpleInterest = (principle * rate * years) / 100;

    printf("The Simple Interest is: %.2f\n", simpleInterest);

    return 0;
}
