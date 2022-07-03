#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v(3);
    for(int i = 0; i < 3; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int a = v[0];
    int b = v[1];
    int c = v[2];
    if(pow(a, 2) + pow(b, 2) == pow(c, 2)) cout << "right triangle\n";
    else if(pow(a, 2) + pow(b, 2) < pow(c, 2)) cout << "obtuse triangle\n";
    else cout << "acute triangle\n";

    return 0;
}
