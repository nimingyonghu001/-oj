#include<stdio.h>
#include<math.h>
int main()
{
    int m, n,max,min,x=0,y=0;
    while (scanf("%d %d", &m, &n) != EOF)
    {
        if (m > n)
        {
            max = m;
            min = n;
        }
        else if (m < n)
        {
            max = n;
            min = m;
        }
        for (int i = min; i <= max; i++)
        {
            if (i % 2 != 0)
            {
                x += pow(i, 3);
                
            }
            else
            {
                y += pow(i, 2);
            }
        }
        printf("%d %d\n", y, x);
        x = y = 0;
    }
    return 0;
}
