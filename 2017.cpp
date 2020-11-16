#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
#include<cstring>

const int t=10000;
using namespace std;
int main()
{
    int n,sum=0,len=0;
    char m[t] = {0};
    while (cin >> n)
    {
        
        for (int j = 0; j < n; j++) {
            scanf("%s", m);
            len = strlen(m);
            for (int i = 0; i < len; i++)
            {
                if (isdigit(m[i]))
                    sum++;
            }
            cout << sum << endl;
            sum = len = 0;
        }
        
    }
    return 0;
}
