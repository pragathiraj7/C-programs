#include<stdio.h>
void main(){
    float l,b,area,permi;
    printf("enter the length: ");
    scanf("%f",&l);
    printf("enter the breadth: ");
    scanf("%f",&b);
    area=l*b;
    permi=2*(l+b);
    printf("area is %f\n",area);
    printf("perimeter is %f",permi);
}