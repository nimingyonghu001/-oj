#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char m[1000], k[1000], temp, x;
    int len;
    while (cin >> m)
    {
        len = strlen(m);
        for(int i=0;i<len;i++)
            k[i] = m[i];
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                if (k[i] < k[j])
                {
                    temp = k[i];
                    k[i] = k[j];
                    k[j] = temp;
                }
            }
        }

        x = k[len - 1];
        for (int i = 0; i < len; i++)
        {
            cout << m[i];
            if (m[i] == x)
                cout << "(max)";
        } 
        cout << endl;
    }
    return 0;
}
