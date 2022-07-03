#include <iostream>

using namespace std;

int main()
{
    int hour;
    int minute;

    cin >> hour >> minute;
    if(hour >= 8 && hour < 17)
    {
        cout << "At School";
    }
    else if(hour == 7 && minute >= 30)
    {
        cout << "At School";
    }
    else
    {
        cout << "Off School";
    }
    return 0;
}
