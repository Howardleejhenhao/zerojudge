#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "r", stdout);
    int c = 1;

    string ans[4] = {"shata", "hajar", "lakh", "kuti"};
    ll n;
    while(cin >> n)
    {
        int k = 0;
        vector<pair<string, int>> vpp;
        while(n > 0)
        {
            if(ans[k % 4] == "hajar")
            {
                vpp.push_back({ans[k % 4], n % 10});
                n /= 10;
                k++;
                continue;
            }
            vpp.push_back({ans[k % 4], n % 100});
            n /= 100;
            k++;
        }
        cout << setw(4) << c;
        cout << ". ";
        for(int i = vpp.size() - 1; i >= 0; i--)
        {
            if(i == vpp.size() - 1) cout << vpp[vpp.size() - 1].second << ' ';
            else cout << vpp[i].first << ' ' << vpp[i].second << ' ';
        }
        cout << '\n';
        c++;
    }

    return 0;
}
