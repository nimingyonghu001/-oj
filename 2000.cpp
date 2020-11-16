#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char a, b, c,x;
    while ((cin >> a >> b >> c))
    {
        if (a > b)
        {
            x = b;
            b = a;
            a = x;
        }
        if (a > c)
        {
            x = a;
            a = c;
            c = x;
        }
        if (b > c)
        {
            x = b;
            b = c;
            c = x;
        }
        cout << a << ' ' << b << ' ' << c<<endl;
}


    return 0;
}
