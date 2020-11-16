#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int m,n;
    float num, sum=0;
    cout << setiosflags(ios::fixed);
    while (scanf("%d", &m) != EOF)
    {
        for (int i = 1; i <= m; i++)
        {
            scanf("%d", &n);
            for (int j = 1; j <= n; j++)
            {
                num = -pow(-1, j) * 1.0 / j;
                sum += num;
                
            }
            cout << setprecision(2) << sum << endl;
            sum = 0;
        }
        sum = 0;
    }
    return 0;
}
