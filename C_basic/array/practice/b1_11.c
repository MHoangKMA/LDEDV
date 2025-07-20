#include <stdio.h>
#include <limits.h>

int main()
{
    int i = 0, n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max1 = INT_MIN, max2 = INT_MIN;

    for (i = 0; i < n; i++)
    {
        if (a[i] > max1 && a[i] > max2)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] < max1 && a[i] > max2)
        {
            max2 = a[i];
        }
    }

    if (max2 == INT_MIN)
    {
        printf("\nKhong ton tai max2");
    }
    else
    {
        printf("\nMax1 = %d, max2 = %d", max1, max2);
    }

    return 0;
}