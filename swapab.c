#include<stdio.h>
void main(){
    int a , b , t;
    printf("enter the first value");
    scanf("%d",&a);
    printf("enter the second value");
    scanf("%d",&b);
    t = a;
    a = b;
    b = t;
    printf("the value of a is %d and b is %d",a,b);
    
}