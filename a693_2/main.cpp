#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, l, r;
    while(cin >> n >> m)
    {
        int total = 0;
        //string num_all;
        //getline(cin, num_all);
        int num_list[100005];
        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            total += a;
            num_list[i + 1] = total;
        }

        for(int i = 0; i < m; i++)
        {
            cin >> l >> r;

            int total = 0;

            total = num_list[r] - num_list[l - 1];
            cout << total << endl;
        }
    }
    return 0;
}
