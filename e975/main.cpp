/*
|----|   |----|
|    |   |    |
|    ----|    |
|             |
|    ----|    |
|    |   |    |
|----|   |----|

*/
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    vector<int> v;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            v.push_back(s[i] - 'a');
        }
        else if(s[i] >= 'A' && s[i] <= 'Z')
        {
            v.push_back(s[i] - 'A');
        }
    }
    //for(int i : v) cerr << i << ' ';
    int ch[] = {11, 14, 21, 4};
    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < v.size() - 3; j++)
        {
            int flag = 1;
            for(int h = 0; h < 4; h++)
            {
                //cerr << v[j + h] + i << ' ';
                if((v[j + h] + i) % 26 != ch[h])
                {
                    flag = 0;
                    break;
                }
            }
            //cerr << '\n';
            if(flag)
            {
                cout << i << '\n';
                exit(0);
            }
        }
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
