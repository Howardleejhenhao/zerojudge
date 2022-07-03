#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b)
{
    if(a % 10 != b % 10)
    {
        return a % 10 < b % 10;
    }
    else
    {
        return a / 10 > b / 10;
    }

}

int main()
{
    int num;
    vector<int> n;
    while(cin >> num)
    {
        n.clear();
        int in;
        for(int i = 0; i < num; i++)
        {
            cin >> in;

            n.push_back(in);
        }
        sort(n.begin(), n.end(), cmp);

        for(int i = 0; i < num; i++)
        {
            cout << n[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
