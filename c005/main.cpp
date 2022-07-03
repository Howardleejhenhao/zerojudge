#include <iostream>

using namespace std;

int main()
{
    long long time;
    cin >> time;

    for(int j = 0; j < time; j++)
    {
        long long num, total, a, b, c;
        total = 0;
        cin >> num;

        for(int d = 0; d < num; d++)
        {
            cin >> a >> b >> c;
            total += a * c;
        }
        cout << total << endl;
    }

    //cout << "Hello world!" << endl;
    return 0;
}
