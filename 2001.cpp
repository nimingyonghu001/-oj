#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double x1, y1, x2, y2,x;
    while(cin >> x1 >> y1 >> x2 >> y2)
    {
        cout << setiosflags(ios::fixed);
        x = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
        cout << setprecision(2) << x << endl;
    }
    return 0;
}
