#include <stdio.h>

int main() {
    float subject1, subject2, subject3;
    float total, percentage;

    // Taking input for marks of three subjects
    printf("Enter marks for subject 1: ");
    scanf("%f", &subject1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &subject2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &subject3);

    // Calculating total and percentage
    total = subject1 + subject2 + subject3;
    percentage = (total / 300) * 100;

    // Checking pass/fail conditions
    if (percentage >= 40 && subject1 >= 33 && subject2 >= 33 && subject3 >= 33) {
        printf("The student has passed.\n");
    } else {
        printf("The student has failed.\n");
    }

    return 0;
}