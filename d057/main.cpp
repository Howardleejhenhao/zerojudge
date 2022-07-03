#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d;

    while(cin >> a >> b >> c >> d)
    {
        if(a == 0 && b == 0 && c == 0 & d == 0)
        {
            break;
        }
        else if((d - b) / (c - a) == 1 || (d - b) / (c - a) == -1)
        {
            cout << "1" << endl;
        }
        else if(a == c && b == d)
        {
            cout << "0" << endl;
        }
        else if((a == c && b != d) || (a != c && b == d))
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
    return 0;
}
