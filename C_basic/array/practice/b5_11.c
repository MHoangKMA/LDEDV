#include <stdio.h>

int main()
{
    int i = 0, n;
    float sum = 0.0;

    do
    {
        scanf("%d", &n);
    } while (n < 1 || n > 10e6);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("%.2lf", sum / n);

    return 0;
}