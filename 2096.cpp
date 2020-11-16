#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a>>b;
            cout << (a % 100 + b % 100) % 100<<endl;
        }
    }
    return 0;
}
