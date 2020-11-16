#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int m[100], n, temp=0,sum=0;
    double average;
    while (scanf("%d", &n) != EOF)
    {
        if (n > 2 && n <= 100)
        {
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &m[i]);
            }
            for (int i = 0; i < n; i++)
            {
            for (int j = 0; j < n; j++)
            {
                if (m[i] < m[j]) 
                {
                    temp = m[i];
                    m[i] = m[j];
                    m[j] = temp;
                }
            }
        }
            for (int i = 1; i < n - 1; i++)
                sum += m[i];
            average = sum / 1.0 / (n - 2);
            cout << setiosflags(ios::fixed) << setprecision(2) << average << endl;
        }
        sum = 0;


    }
    return 0;
}
