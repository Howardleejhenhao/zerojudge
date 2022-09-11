#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

vector<pair<char, int>> p(26);

bool cmp(pair<char, int> a, pair<char, int> b)
{
    if(a.second != b.second) return a.second > b.second;
    else return a.first < b.first;
}

int main()
{
    fastio;

    int n;
    cin >> n;
    for(int i = 0; i < 26; i++)
    {
        p[i].first = i + 'A';
        p[i].second = 0;
    }
    string s;
    getline(cin, s);
    ss sss;
    while(n--)
    {
        getline(cin, s);
        sss << s;
        while(sss >> s)
        {
            for(int i = 0; i < s.length(); i++)
            {
                if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
                {
                    if(s[i] > 96)
                    {
                        p[s[i] - 97].second++;
                    }
                    else
                    {
                        //cout << s[i] - 65 << '\n';
                        p[s[i] - 65].second++;
                    }
                }
            }
        }
        sss.clear();
    }
    sort(p.begin(), p.end(), cmp);
    for(int i = 0; i < 26; i++)
    {
        if(p[i].second < 1) break;
        cout << p[i].first << ' ' << p[i].second << '\n';
    }
    return 0;
}
