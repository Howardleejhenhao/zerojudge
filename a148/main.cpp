#include <iostream>

using namespace std;

int main()
{
    int num;
    while(cin >> num)
    {
        int a;
        double total = 0;
        for(int i = 0; i < num; i++)
        {
            cin >> a;
            total += a;
        }

        if(total <= 59 * num)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
