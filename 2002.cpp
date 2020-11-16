#include<iostream>
#include<cmath>
#include<iomanip>
#define Pi 3.1415927
using namespace std;
int main()
{
    double r;
    while (cin >> r)
    {
        cout << setiosflags(ios::fixed);
        cout << setprecision(3) << 4 * Pi * pow(r, 3) / 3.0 << endl;
    }

    return 0;
}
