#include <bits/stdc++.h>

using namespace std;

vector<int>n;

int main()
{
    int k, num;

    cin >> k >> num;
    int m = 0;
    while(num > 0)
    {
        n.push_back(num % 10);
        num /= 10;
        m++;
    }
    int total[1000];
    int i = 0;
    int index = 0;
    while(i < m)
    {
        if((i + 1) % k == 0)
        {
            index ++;
        }
        total[index] += n[i];
        i++;
    }
    for(int i = 0; i < index + 1; i++)
    {
        cout << total[i] << endl;
    }
    return 0;
}
