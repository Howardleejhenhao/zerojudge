#include <bits/stdc++.h>

using namespace std;

int main()
{

    int num;
    cin >> num;
    int num_list[num];

    for(int i = 0; i < num; i++)
    {
        cin >> num_list[i];
    }
    sort(num_list, num_list + num);

    cout << num_list[num / 2] << endl;

    return 0;
}
