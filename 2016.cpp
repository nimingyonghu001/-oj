#include<iostream>
using namespace std;
int main()
{
    int n,m[100],temp,k[100],d,t;
    while (cin >> n)
    {
        if (n == 0)
            break;
        for (int i = 0; i < n; i++)
        {
            cin >> k[i];
            m[i] = k[i];
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

        for (int i = 0; i < n; i++)
        {
            if (k[i] == m[0])
            {
                t = i;
                d = k[0];
                k[0] = m[0];
                k[t] = d;

            }
        }
        if (t < n)
        {
            cout << k[0];
            for (int i = 1; i <= t; i++)
                cout <<' '<< k[i];
            for (int i = t + 1; i < n; i++)
            {
                cout << ' ';
                cout << k[i];
            }
            }

        else if (t == n)
        {
            cout << k[0];
            for (int i = 1; i < t; i++)
            {
                cout << ' ';
                cout << k[i];

            }
        }
        
        cout << endl;
    }



    return 0;
}
