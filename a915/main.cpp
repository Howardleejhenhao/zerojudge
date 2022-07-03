#include <bits/stdc++.h>

using namespace std;

bool compare(const int &odd1, const int &odd2)
{
    return odd1 < odd2;
}

struct a{
    int x;
    int y;
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    a num_list[num];

    for(int i = 0; i < num; i++)
    {
        cin >> num_list[i].x >> num_list[i].y;
    }

    sort(num_list, num_list + num);

    for(int i = 0; i < num; i++)
    {
        cout << num_list[i].x << " " << num_list[i].y << "\n";
    }

    /*
    int num_a[num], num_b[num];

    for(int i = 0; i < num; i++)
    {
        cin >> num_a[i] >> num_b[i];
    }

    sort(num_a, num_a + num);
    sort(num_b, num_b + num);

    for(int i = 0; i < num; i++)
    {
        cout << num_a[i] << " " << num_b[i] << "\n";
    }
    */

    return 0;
}
