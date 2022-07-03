#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b)
{
    if(a % 7 == 0 && b % 7 == 0)
    {
        if((a % 70) != (b % 70))
        {
            return (a % 70) > (b % 70);
        }
        else
        {
            return 0;
        }
    }
    else if(a % 7 == 0)
    {
        return 1;
    }
    else if(b % 7 == 0)
    {
        return 0;
    }
    else
    {
        if(a % 77 != b % 77)
        {
            return (a % 77) < (b % 77);
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    vector<int> n;
    int num;
    while(cin >> num)
    {
        if(num == 0)
        {
            break;
        }
        n.push_back(num);
    }
    sort(n.begin(), n.end(), cmp);
    cout << n[0] << '\n';
    return 0;
}
