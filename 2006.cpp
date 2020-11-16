#include<stdio.h>
int main()
{
    int n,x,i,p=1;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &x);
            if (x % 2 != 0)
                p *= x;
        }
        printf("%d\n", p);
        p = 1;
    }


    return 0;
}
