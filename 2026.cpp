#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char x[100];
    while (cin.getline(x,100))
    {
        int len = strlen(x);
        int k;
        if (x[0] >= 'a' && x[0] <= 'z')
            x[0] -= 32;
        for (int i = 0; i < len; i++)
        {
            if (x[i] == ' ')
            {
                k = i;
                if (x[k + 1] >= 'a' && x[k + 1] <= 'z')
                    x[k + 1] -= 32;
                i = k + 1;
                cout << ' ';
            }
            cout << x[i];
        }
        cout << endl;
    }
    return 0;
}
