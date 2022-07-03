#include <bits/stdc++.h>

using namespace std;

bool cmp(const vector<double> a, const vector<double> b)
{
    if(a[4] != b[4]) return a[4] < b[4];
    else if(a[1] != b[1]) return a[1] < b[1];
    else if(a[2] != b[2]) return a[2] < b[2];
    else if(a[3] != b[3]) return a[3] < b[3];
        return a[0] > b[0];
}

int main()
{
    int num, in;
    cin >> num;
    vector<vector<double>> n(num);

    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> in;
            n[i].push_back(in);
        }
    }
    for(int i = 0; i < num; i++)
    {
        n[i].push_back((n[i][1] * 5 + n[i][2] * 3 + n[i][3] * 2) / 10);
    }
    sort(n.begin(), n.end(), cmp);
    for(int i = num - 1; i >= 0; i--)
    {
        cout << n[i][0] << ' ' << n[i][4] << '\n';
    }
    return 0;
}
