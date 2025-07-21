#include<stdio.h>

int isThuanNghich(int n)
{
    int original = n;
    int reversed = 0;

    while (n > 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n/10;
    }
    return original == reversed;
}


int main()
{
    int i=0, n, dem = 0;
    scanf("%d", &n);
    if(n < 1 || n > 10e6) return 0;
    int a[n];
    for(i = 0;i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0;i < n;i++)
    {
        if(isThuanNghich(a[i]))
        {
            dem++;
        }
    }

    printf("%d", dem);
    return 0;
}