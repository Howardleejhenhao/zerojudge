#include <iostream>

using namespace std;

int main()
{
    int num;
    int total;
    cin >> total;
    for(int i = 0; i < total; i ++)
    {
        cin >> num;
        if(num % 4 == 0 && num % 100 != 0 || num % 400 == 0)
        {
            cout << "a leap year" << endl;
        }
        else
        {
            cout << "a normal year" << endl;
        }
    }
    return 0;
}
