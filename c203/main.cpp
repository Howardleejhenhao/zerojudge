#include <iostream>

using namespace std;

int main()
{
    int num;

    int numa;
    cin >> numa;
    for(int i = 0; i < numa; i++)
    {
        cin >> num;
        int total = 0;

        for(int i = 1; i < num; i++)
        {
            if(num % i == 0)
            {
                total += i;
            }
        }
        if(total > num)
        {
            cout << "abundant" << endl;
        }
        else if(num == total)
        {
            cout << "perfect" << endl;
        }
        else
        {
            cout << "deficient" << endl;
        }
    }

    return 0;
}
