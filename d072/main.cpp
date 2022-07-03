#include <iostream>

using namespace std;

int main()
{
    int num;
    int total;
    cin >> total;
    for(int i = 1; i < total + 1; i++)
    {
        cin >> num;
        if(num % 4 == 0 && num % 100 != 0 || num % 400 == 0)
        {
            cout << "Case " << i << ": a leap year" << endl;
        }
        else
        {
            cout << "Case " << i << ": a normal year" << endl;
        }

    }
    return 0;
}
