#include<stdio.h>

int main()
{
    int n, i;

    while (scanf("%d",&n))
    {
        if (n==0)
            break;

        printf("1");

        for (i=2; i<=n; i++)
        {
            printf(" %d",i);
        }

        printf("\n");
    }

    return 0;
}

