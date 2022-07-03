#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

const string two[] = {"", "Medium Wac", "WChicken Nugget", "Geez Burger", "ButtMilk Crispy Chicken", "Plastic Toy"};
const string one[] = {"", "German Fries", "Durian Slices", "WcFurry", "Chocolate Sunday"};
map<string, int> mp;
int main()
{
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "r", stdout);
    mp["Medium Wac"] = 4;
    mp["WChicken Nugget"] = 8;
    mp["Geez Burger"] = 7;
    mp["ButtMilk Crispy Chicken"] = 6;
    mp["Plastic Toy"] = 3;

    mp["German Fries"] = 2;
    mp["Durian Slices"] = 3;
    mp["WcFurry"] = 5;
    mp["Chocolate Sunday"] = 7;

    int n;
    int total = 0;

    while(cin >> n && n)
    {
        if(n == 1)
        {
            int in;
            cin >> in;
            cout << two[in] << ' ' << mp[two[in]] << '\n';
            total += mp[two[in]];
        }
        else
        {
            int in;
            cin >> in;
            cout << one[in] << ' ' << mp[one[in]] << '\n';
            total += mp[one[in]];
        }
    }
    cout << "Total: " << total << '\n';

    return 0;
}
