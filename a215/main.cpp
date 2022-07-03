#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int total, TF;
    TF = 1;

    while(cin >> a >> b)
    {
        TF = 1;
        total = 0;
        int i, num = 0;
        i = a;
        while(b >= total)
        {
            total += i;
            i += 1;
            num += 1;
        }
        if(num == 0)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << num << endl;
        }
    }
    return 0;
}
