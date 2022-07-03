#include <iostream>

using namespace std;

int main()
{

    int num;
    cin >> num;
    while(num != 0)
    {
        for(int i = 1; i < num; i++)
        {
            if(i % 7 == 0)
            {
                cout << "";
            }
            else
            {
                cout << i << " ";
            }
        }
        cout << endl;
        cin >> num;
    }
    return 0;
}
