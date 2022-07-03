#include <iostream>

using namespace std;

int main()
{
    long long num, a,  b, c;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cin >> a >> b >> c;
        if(a == 1)
        {
            cout << b + c <<endl;
        }
        else if(a == 2)
        {
            cout << b - c << endl;
        }
        else if(a == 3)
        {
            cout << b * c << endl;
        }
        else
        {
            cout << b / c << endl;
        }
    }

    return 0;
}
