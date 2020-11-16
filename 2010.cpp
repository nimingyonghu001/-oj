#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m, n,min,max,a,b,c,x,y,z,t=1;
    bool flag = true;
    while (scanf("%d %d", &m, &n) != EOF)
    {
        if (m > n)
        {
            min = n;
            max = m;

        }
        else if (m < n)
        {
            min = m;
            max = n;
        }
    for (int i = min; i <= max; i++)
    {
        
            a = i / 100;
            b = i / 10 % 10;
            c = i % 10;
            x = pow(a, 3);
            y = pow(b, 3);
            z = pow(c, 3);
            if ((x + y + z) == i)
            {
                if (flag)
                {
                    printf("%d", i);
                    
                    flag = false;
                }
                else
                    cout << ' ' << i;
                t = 0;
            }
            
    if(i == max)
    {
        if (t)
        {
            cout << "no";
            cout << endl;
            break;
        }
        else
            cout << endl;
    }
}    
        a = b = c = x = y = z = 0;
        t = 1;
        flag = true;
    }
    return 0;
}
