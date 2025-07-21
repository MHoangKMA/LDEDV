#include <stdio.h>
#include <math.h>

int isPerfectSquare(long long n)
{
    if (n < 0)
        return 0;
    long long root = (int)sqrt(n);
    return root * root == n;
}

int main()
{
    int i = 0, n, count = 0;
    do
    {
        scanf("%d", &n);
    } while (n < 1 || n > 10e6);

    long long a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (isPerfectSquare(a[i]))
        {
            /* code */
            count++;
        }
    }
    printf("%d", count);
}