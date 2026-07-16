#include <stdio.h>

void display(int n)
{
    if (n > 0)
    {   display(n - 1);
        printf("%d ", n);
       
    }
}

int main()
{
    display(5);
    return 0;
}