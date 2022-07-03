#include <iostream>

using namespace std;

int main()
{
    int day;

    int total_money = 0;
    int num;
    cin >> day;
    int total[day];
    for(int i = 0; i < day; i++)
    {
        cin >> num;
        total[i] = num;
    }
    for(int j = 0; j < day; j++)
    {
        total_money += total[j] * (j + 1);
    }

    cout << total_money << endl;
    return 0;
}
