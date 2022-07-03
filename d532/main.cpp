#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int total = 0;

    cin >> num1 >> num2;
    for(int i = num1; i < num2 + 1; i ++)
    {
        if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
        {
            total += 1;
        }
    }

    cout << total << endl;
    return 0;
}
