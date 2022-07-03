#include <iostream>

using namespace std;

int main()
{
    int num;
    int a, b, c;
    a = 0;
    b = 0;
    c = 0;

    cin >> num;
    int num_list[num];
    for(int i = 0; i < num; i++)
    {
        cin >> num_list[i];
    }
    for(int i = 0; i < num; i++)
    {
        if(num_list[i] % 3 == 0)
        {
            a += 1;
        }
        else if(num_list[i] % 3 == 1)
        {
            b += 1;
        }
        else if(num_list[i] % 3 == 2)
        {
            c += 1;
        }
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}
