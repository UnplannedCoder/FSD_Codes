#include<stdio.h>
int main() {
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>60){
        printf("You are passed with first division");
    }
    else if(a>50){
        printf("You are passed with second division");
    }
    else if(a>40){
        printf("You are passed with third division");
    }
    else{
        printf("You are failed");
    }
}