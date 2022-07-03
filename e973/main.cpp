#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.second != b.second) return a.second > b.second;
    else return a.first < b.first;
}

int main()
{
    long long n;
    cin >> n;
    vector<pair<int, int>> vp(10);
    for(int i = 0; i < 10; i++)
    {
        vp[i].first = i;
        vp[i].second = 0;
    }
    while(n > 0)
    {
        int i = n % 10;
        vp[i].second++;

        n /= 10;
    }
    sort(vp.begin(), vp.end(), cmp);
    for(int i = 0; i < 10; i++)
    {
        if(vp[i].second != 0)
        {
            cout << vp[i].first << ' ';
        }
        else return 0;
    }
    return 0;
}
