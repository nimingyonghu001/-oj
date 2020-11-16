#include<iostream>

using namespace std;
int main()
{
    double n;
    while (cin >> n)
    {
        if (n >= 0 && n <= 100)
        {
            if (n >= 90)
                cout << 'A' << endl;
            else if (n >= 80 && n < 90)
                cout << 'B' << endl;
            else if (n >= 70 && n < 80)
                cout << 'C' << endl;
            else if (n >= 60 && n < 70)
                cout << 'D' << endl;
            else
                cout << 'E' << endl;
        }
        else
            cout << "Score is error!" << endl;
        }
    return 0;
}
