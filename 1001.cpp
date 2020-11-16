#include<iostream>
using namespace std;
int main()
{
    long n,sum=0,m,x[100];
    while (cin >> m)
    {
        
            for (int i = 1; i <= m; i++)
            {
                sum += i;
            }
            cout << sum << endl<<endl;
        

            sum = 0;        
    }
    return 0;
}
