#include<iostream>
using namespace std;
int main()
{
    int m=1,n,t=1;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 1; i < n; i++)
        {
            t = 2 *( m + 1);
            m = t;
        }
        cout << m<<endl;
        m = t = 1;
    }

    return 0;
}
