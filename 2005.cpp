#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,c,j=-1;
    while (scanf("%d/%d/%d", &a, &b, &c)!=EOF)
    {
        for (int i = 1; i <= b; i++)
        {
            if (i != 2 && i != 4 && i != 6 && i != 9 && i != 11)
                j++;
        }
        if (b == 1)
            cout << c << endl;
        else if (b == 2)
        {
            cout << 31 + c << endl;
        }
        else if (b > 2)
        {
            if (a % 400 == 0)
                cout << 29 + (b - 2) * 30 + j+c<<endl;
            else if (a % 400 != 0)
                cout << 28 + (b - 2) * 30 + j+c<<endl;
        }
        j = -1;
    }
    return 0;
}
