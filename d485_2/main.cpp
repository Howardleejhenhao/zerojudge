#include <iostream>

using namespace std;

int main()
{
    int num1, num2, total;
    cin >> num1 >> num2;

    if(num1 % 2 == 0)
    {
        if(num2 %2 == 0)
        {
            total = (num2 - num1) / 2 + 1;
        }
        else
        {
            total = (num2 - num1) / 2 + 1;
        }
    }
    else
    {
        if(num2 %2 == 0)
        {
            total = (num2 - num1) / 2 + 1;
        }
        else
        {
            total = (num2 - num1) / 2;
        }
    }
    cout << total << endl;
    return 0;
}
