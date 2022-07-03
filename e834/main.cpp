#include <iostream>

using namespace std;

int main()
{
    int num;
    int num_list[10010];
    cin >> num;
    int input;
    int i = 0;
    do
    {
        cin >> input;
        num_list[i] = input;
        i++;
    }while(input != 0);
    i = 0;
    while(num_list[i] != 0)
    {
        if(num_list[i] % num == 0)
        {
            cout << num_list[i] / num << endl;
        }
        else
        {
            cout << num - (num_list[i] % num) << endl;
        }
        i++;
    }
    return 0;
}
