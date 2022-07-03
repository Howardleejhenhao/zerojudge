#include <bits/stdc++.h>

using namespace std;

stack<int>s;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;

    cin >> n;
    int in;
    int num;
    while(n--)
    {
        cin >> in;
        if(in == 1)
        {
            s.pop();
        }
        else if(in == 2)
        {
            cout << s.top() << '\n';
        }
        else
        {
            cin >> num;

            s.push(num);
        }
    }
    return 0;
}
