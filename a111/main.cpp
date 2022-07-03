#include <iostream>

using namespace std;

int main()
{

    int num;

    cin >> num;

    while(num != 0)
    {
        cout << num * (num + 1) * ( 2 * num + 1) / 6 << endl;
        cin >> num;
    }


    return 0;
}
