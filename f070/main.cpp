#include <iostream>

using namespace std;

int main()
{
    int a1, a2, b1, b2, c1, c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    int i = 1;
    while(1)
    {
        if(i % a1 == a2 && i % b1 == b2 && i % c1 == c2)
        {
            cout << i << '\n';
            break;
        }
        i++;
    }
    return 0;
}
