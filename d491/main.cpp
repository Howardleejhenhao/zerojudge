#include <iostream>

using namespace std;

int main()
{
    int num1, num2, total;
    total = 0;
    cin >> num1 >> num2;
    total = 0;
    if(num2 > num1)
    {

        for(int i = num1; i < num2 + 1; i++)
        {
            //cout << num2 << endl;
            if(i % 2 == 0)
            {
                total += i;
            }
        }
    }

    else
    {
        for(int i = num2; i < num1 + 1; i++)
        {
            //cout << "123" << endl;
            if(i % 2 == 0)
            {
                total += i;
            }
        }
    }
    cout << total << endl;
    return 0;
}
