#include <bits/stdc++.h>

using namespace std;


int f(int a, int b, int c, int d, int n)
{
    if(n == 1) return a;
    else if(n == 2) return b;
    else if(n == 3) return c;
    else if(n == 4) return d;
    else return f(a, b, c, d, n - 4) + f(a, b, c, d, n - 1);
}

int main()
{
    int time;
    cin >> time;
    int a, b, c, d, n;
    while(time--)
    {
        vector<int> num_list;
        cin >> n >> a >> b >> c >> d;
        for(int i = 1; i <= n; i++)
        {
            num_list.push_back(f(a, b, c, d, i));
        }
        sort(num_list.begin(), num_list.end());

        cout << num_list[num_list.size() / 2] << endl;
    }

    return 0;
}
