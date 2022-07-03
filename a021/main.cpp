#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;

    uint64_t a, b;
    char c;
    cin >> a >> c >> b;
    if(c == '+')cout << a + b << '\n';
    else if(c == '-')cout << a - b << '\n';
    else if(c == '*')cout << a * b << '\n';
    else cout << a / b << '\n';
    return 0;
}
