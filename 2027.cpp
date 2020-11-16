#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int len,n,a,e,i,o,u;
    a = e = i = o = u = 0;
    char m[1000];
    while (cin >> n)
    {
        for (int y = 0; y < n; y++)
        {
            a = e = i = o = u = 0;
            getchar();
            cin.get(m, 1000);
            len = strlen(m);
            for (int t = 0; t < len; t++)
            {
                if (m[t] == 'a' )
                    a++;
                else if (m[t] == 'e')
                    e++;
                else if (m[t] == 'i')
                    i++;
                else if (m[t] == 'o')
                    o++;
                else if (m[t] == 'u' )
                    u++;
            }

            cout << "a:" << a << endl;
            cout << "e:" << e << endl;
            cout << "i:" << i << endl;
            cout << "o:" << o << endl;
            cout << "u:" << u << endl;
            
            if (y == n - 1)
                break;
            cout << endl;
            
        }
        
    }
    return 0;
}
