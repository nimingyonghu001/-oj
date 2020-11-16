#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double n;
    while (cin >> n)
    {
        
        cout << setiosflags(ios::fixed);
        if (n > 0)
            cout << setprecision(2) << n << endl;
        else
            cout << setprecision(2) << -n << endl;
    }
    return 0;
}
