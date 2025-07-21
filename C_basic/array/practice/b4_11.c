#include <stdio.h>

int main()
{

    int i = 0, n, demChan = 0, demLe = 0;

    do
    {
        scanf("%d", &n);
        /* code */
    } while (n < 1 || n > 10e6);

    int a[n];

    for(i=0;i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0;i < n; i++)
    {
        if(a[i] % 2 ==0)
        {
            demChan++;
        }
        else if(a[i] % 2 != 0)
        {
            demLe++;
        }
    }

    printf("%d \n%d", demChan, demLe);

    return 0;
}