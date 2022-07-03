#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, l, r;
    cin >> n >> m;
    //string num_all;
    //getline(cin, num_all);
    int num_list[100005];
    for(int i = 0; i < n; i++)
    {
        cin >> num_list[i];
    }

    while(cin >> l >> r)
    {

        int total = 0;

        for(int j = l; j < r + 1; j++)
        {
            total += num_list[j - 1];
        }
        cout << total << endl;
    }
    return 0;
}
