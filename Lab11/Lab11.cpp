#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    //1
    int a,b,c, x1,y1,x2,y2,x3,y3;
    cin >> a >> b;
    if (a == b)
    {
        a = 0;
        b = 0;
    }
    if (a > b)
    {
        b = a;
    }
    if (a < b)
    {
        a = b;
    }
    cout << a << ' ' << b << endl;

    //2
    cin >> a >> b >> c;
    if (a >= b && b >= c)
    {
        a = a + b;
    }
    if (a >= b && c >= b)
    {
        a = a + c;
    }
    if (b >= a && c>= a)
    {
        a = b + c;
    }
    cout << a << endl;

    //3
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    a = sqrt((abs(x1 - x2))* (abs(x1 - x2)) + (abs(y1 - y2))* (abs(y1 - y2)));
    b = sqrt((abs(x1 - x3))* (abs(x1 - x3)) + (abs(y1 - y3))* (abs(y1 - y3)));
    if (a < b)
    {
        cout << 'B' << ' ' <<a << endl;
    }
    if (a >= b)
    {
        cout << 'C' << ' ' << b << endl;
    }

    //4
    cin >> x1 >> y1;
    if(x>0)
}
