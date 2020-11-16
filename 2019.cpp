#include<iostream>
using namespace std;
int main()
{
    int m, n,t[100],temp,k;
    while (cin >> n >> m)
    {
        if (m == 0 && n == 0)
            break;
        for (int i = 0; i < n; i++)
        {
            cin >> t[i];
            if (m < t[i])
            {
                temp = m;
                m = t[i];
                t[i] = temp;
                k = i;
            }
            
        }
        if (m < t[n - 1])
        {
            cout << t[0];
            for (int i = 1; i <= k; i++)
            {
                cout <<' '<< t[i] ;
            }
            for (int i = k + 1; i < n; i++)
            {
                cout <<' '<< t[i] ;
            }
        }
        else if (m > t[n - 1])
        {
            cout << t[0];
            for (int i = 1; i < n; i++)
                cout << ' ' << t[i];
            cout << ' ' << m;
        }
        cout << endl;
    }
    return 0;
}
