#include <bits/stdc++.h>

using namespace std;

bool cmp(const vector<int> a, const vector<int> b)
{
    if(a[1] != b[1])
    {
        return a[1] < b[1];
    }
    else
    {
        return a[0] > b[0];
    }
}

int main()
{
    vector<vector<int>> n(10000);
    int num;
    int in;
    while(cin >> num)
    {
        n.clear();
        for(int i = 0; i < 10; i++)
        {
            n[i].push_back(i);
            n[i].push_back(0);
        }
        for(int i = 0; i < 10; i++)
        {
            n[i][1] = 0;
        }

        for(int i = 0; i < num; i++)
        {
            cin >> in;
            n[in][1] += 1;
        }
        sort(n.begin(), n.end(), cmp);
        for(int i = 0; i < 10; i++)
        {
            if(n[i][1] != 0)
            {
                cout << n[i][0]  << ' ' << n[i][1] << endl;
            }
        }
        cout << '\n';
    }
    return 0;
}
