#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(c == 0)
    {
        if(a == 0)
        {
            if(b == 0)
            {
                cout << "AND" << endl;
                cout << "OR" << endl;
                cout << "XOR" << endl;
            }
            else
            {
                cout << "AND" << endl;
            }
        }
        else
        {
            if(b == 0)
            {
                cout << "AND" << endl;
            }
            else
            {
                cout << "XOR" << endl;
            }
        }
    }
    else
    {
        if(a == 0)
        {
            if(b == 0)
            {
                cout << "IMPOSSIBLE" << endl;
            }
            else
            {
                cout << "OR" << endl;
                cout << "XOR" << endl;
            }
        }
        else
        {
            if(b == 0)
            {
                cout << "OR" << endl;
                cout << "XOR" << endl;
            }
            else
            {
                cout << "AND" << endl;
                cout << "OR" << endl;
            }
        }
    }
    return 0;
}
