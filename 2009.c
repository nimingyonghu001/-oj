#include<stdio.h>
#include<math.h>
int main()
{
    int m, n;
    double x,t,sum=0;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        x = (double)n;
        for (int i = 1; i < m; i++)

        {
            t = sqrt(x);
            x = t;
            sum += t;
        }
        printf("%.2f\n", sum + n);
        sum = 0;
    }
    return 0;
}
