#include<stdio.h>
#include<math.h>

int isPrime(int n)
{
    if(n < 2 ) return 0;
    for(int i = 2; i <= sqrt(n);i++)
    {
        if(n % i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{

    int i =0,n, count =0;
    scanf("%d",&n);
    if(n < 1 || n > 1000) return 0;

    int a[n];

    for(i=0; i < n;i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(isPrime(a[i]) == 1)
        {
            count++;
        }
    }
    printf("%d", count);

    
    /* code */
    return 0;
}
