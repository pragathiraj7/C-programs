#include<stdio.h>

void main()
{
    float r, area, permi;

    printf("Enter the radius: ");
    scanf("%f", &r);

    area = 3.14 * r * r;
    permi = 2 * 3.14 * r;

    printf("Area of circle is %f\n", area);
    printf("Perimeter of circle is %f", permi);
}