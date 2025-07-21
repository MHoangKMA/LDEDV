#include <stdio.h>

int main()
{
    int i = 0, n, dem = 0, x;

    do
    {
        /* code */
        scanf("%d", &n);
    } while (n < 1 || n > 10e6);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            dem++;
        }
    }

    printf("%d", dem);

    return 0;
}