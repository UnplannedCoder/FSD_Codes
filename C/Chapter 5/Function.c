//Function is a block of code that performs a specific task
#include <stdio.h>

int sum(int a, int b){
    return a+b;
}
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d,%d",&a,&b);
    printf("Sum is:%d",sum(a,b));
    return 0;
}