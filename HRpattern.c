#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int a = i;
            int b = j;

            if (a >= n)
                a = 2 * n - 2 - i;

            if (b >= n)
                b = 2 * n - 2 - j;

            if (a < b)
                printf("%d ", n - a);
            else
                printf("%d ", n - b);
        }

        printf("\n");
    }

    return 0;
}