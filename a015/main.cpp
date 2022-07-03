#include <iostream>

using namespace std;

int main()
{
    int a, b;
    while(cin >> a >> b)
    {

        int num_list[a][b];

        for(int i = 0; i < a; i++)
        {
            for(int j = 0; j < b; j++)
            {
                cin >> num_list[i][j];
            }
        }

        for(int j = 0; j < b; j++)
        {
            for(int i = 0; i < a; i++)
            {
                cout << num_list[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
