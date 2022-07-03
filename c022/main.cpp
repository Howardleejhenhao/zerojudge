#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;


    for(int j = 0; j < num; j++)
    {
        int a, b;
        cin >> a;
        cin >> b;

        int total = 0;

        for(int i = a; i <= b; i++)
        {
            if(i % 2 == 1)
            {
                total += i;
            }
        }
        cout << "Case " << j + 1 << ": " << total << endl;;
    }


    return 0;
}
