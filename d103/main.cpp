#include <iostream>

using namespace std;

int main()
{
    while(true){

        string num_list;
        int total = 0;
        int ans = 0;
        getline(cin, num_list);
        if(num_list == "")
        {
            break;
        }
        total = (((int)num_list[0] - 48) + ((int)num_list[2] - 48) * 2 + ((int)num_list[3] - 48) * 3 + ((int)num_list[4] - 48) * 4 + ((int)num_list[6] - 48) * 5 + ((int)num_list[7] - 48) * 6 + ((int)num_list[8] - 48) * 7);
        total += (((int)num_list[9] - 48) * 8 + ((int)num_list[10] - 48) * 9);


        ans = total % 11;



        if(ans == (int)num_list[12] - 48)
        {
            cout << "Right" << endl;
        }
        else if(ans == 10 && num_list[12] == 'X')
        {
            cout << "Right" << endl;
        }
        else
        {
            for(int i = 0; i < 12; i++)
            {
                cout << num_list[i];
            }
            if(ans != 10)
            {
                cout << ans << endl;
            }
            else
            {
                cout << "X" << endl;
            }
        }
    }
    return 0;
}
