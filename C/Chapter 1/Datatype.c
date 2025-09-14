#include<stdio.h>
int main() {
    int a=5;  //int takes 4 bytes (32 bits) in memory
    float b=3.14;  //float takes 4 bytes (32 bits) in memory
    char c='A'; //character is always enclosed in single quotes 
                // char takes 1 byte (8 bits) in memory
    printf("%d\n",a);  //%d is a format specifier for integer
    printf("%f\n",b);  //%f is a format specifier for float
    printf("%c\n",c);  //%c is a format specifier for character
    return 0;
}