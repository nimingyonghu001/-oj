#include<iostream>
using namespace std;
int main()
{
    int a, n,l, m[1000];
    while (cin >> a >> n)
    {
        int i = 0;
        int y = a;
        if (a < 0)
        {
            l = 1;
            a = -a;
        }
            while (a)
        {
            int t = a % n;
            a /= n;
            m[i] = t;
            i++;
        }
            if (y < 0)
            {
                if (l)
                {
                    cout << '-';
                    l = 0;
                }
            }
        for (int x = i - 1; x >= 0; x--)
        {
                if (m[x] < 10)
                    cout << m[x];
                else
                {
                    switch (m[x]) 
                    {
                    case 10:cout << 'A';
                        break;
                    case 11:cout << 'B';
                        break;
                    case 12:cout << 'C';
                        break;
                    case 13:cout << 'D';
                        break;
                    case 14:cout << 'E';
                        break;
                    case 15:cout << 'F';
                        break;
                    }
                }
            }
            
        
        cout << endl;
    }
    return 0;
}
