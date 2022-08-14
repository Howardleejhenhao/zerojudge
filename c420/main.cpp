#include <iostream>

using namespace std;

int main()
{
    int num, a;
    cin >> num;
    a = 1;
    for(int i = 1; i < num + 1; i++)
    {
        for(int j = 0; j < num - i; j++)
        {
            cout << "_";
        }
        for(int j = 0; j < 1 + (i - 1) * 2; j++)
        {
            cout << "*";
        }
        a += 2;
        for(int j = 0; j < num - i; j++)
        {
            cout << "_";
        }
        cout << endl;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
