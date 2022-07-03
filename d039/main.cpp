#include <iostream>

using namespace std;

int main()
{
    int num;
    int a, b;
    int lengtht, wid, total;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cin >> a >> b;
        lengtht = a / 3;
        wid = b / 3;
        total = lengtht * wid;
        cout << total << endl;

    }

    return 0;
}
