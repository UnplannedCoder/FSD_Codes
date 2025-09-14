#include<stdio.h>
int main(){
    for(int i=0;i<20;i++){
        if(i==10){
            break; //exit the loop when i is 10
        }
        printf("%d\n",i);
    }
}