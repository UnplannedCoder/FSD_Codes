#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
        printf("%d * %d = %d",n,i,n*i);
        printf("\n");
    }
    return 0;   
}