#include <iostream>

using namespace std;

int main()
{
    int time_list[7];
    int a, b, biggest, date;
    biggest = 0;
    date = 0;
    for(int i = 0; i < 7; i++)
    {
        cin >> a >> b;
        time_list[i] = a + b;
    }

    for(int i = 0; i < 7; i++)
    {
        if(time_list[i] > 8)
        {
            if(time_list[i] > biggest)
            {
                biggest = time_list[i];
                date = i + 1;
            }
        }
    }
    cout << date << endl;
    return 0;
}
