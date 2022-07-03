#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    vector<int>n;

    int num;

    cin >> num;
    for(int i = 0; i < 9; i++)
    {
        n.push_back(num % 10);
        num /= 10;
        //cout << i << endl;
    }
    int re = n[0] + n[1] * 10 + n[2] * 100;
    sort(n.begin(), n.end(), cmp);
    int ans = n[0] * n[0] + n[1] * n[1];
    if(ans == re)
    {
        cout << "Good Morning!\n";
    }
    else
    {
        cout << "SPY!\n";
    }
    return 0;
}
