#include <iostream>

using namespace std;

int main()
{
    int num, total;
    total = 0;
    int num_list[10];
    for(int i = 0; i < 10; i++)
    {
        cin >> num_list[i];
    }
    cin >> num;
    for(int i = 0; i < 10; i++)
    {
        if(num_list[i] <= num + 30)
        {
            total += 1;
        }
    }

    cout << total << endl;
    return 0;
}
