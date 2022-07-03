#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    while(a != 0)
    {
        for(int i = 1; i < a + 1; i++)
        {
            for(int j = 0; j < a - i; j++)
            {
                cout << "_";
            }
            for(int j = 0; j < i; j++)
            {
                cout << "+";
            }
            cout << endl;
        }
        cin >> a;
    }
    return 0;
}
