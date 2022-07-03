#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> b, a;
    int n;
    int in;
    cin >> in;
    b.push_back(in);
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> in;
        a.push_back(in);
    }
    int b_win = 0;
    int i;
    int flag = 0;
    for(i = 0; i < n; i++)
    {
        if(b[i] == 0)
        {
            if(a[i] == 2)
            {
                b_win++;
                flag = 1;
                break;
            }
            else if(a[i] == 5)
            {
                b_win--;
                break;
            }
        }
        else if(b[i] == 2)
        {
            if(a[i] == 0)
            {
                b_win--;
                break;
            }
            else if(a[i] == 5)
            {
                b_win++;
                flag = 1;
                break;
            }
        }
        else
        {
            if(a[i] == 0)
            {
                b_win++;
                flag = 1;
                break;
            }
            else if(a[i] == 2)
            {
                b_win--;
                break;
            }
        }
        if(i > 0)
        {
            if(a[i] == a[i - 1])
            {
                if(a[i] == 0)
                {
                    b.push_back(5);
                }
                else if(a[i] == 2)
                {
                    b.push_back(0);
                }
                else
                {
                    b.push_back(2);
                }
            }
            else
            {
                b.push_back(b[i]);
            }
        }
        else
        {
            b.push_back(b[i]);
        }
    }

    if(b_win == 0)
    {
        for(int i = 0; i < b.size() - 1; i++)
        {
            cout << b[i] << ' ';
        }
        cout <<": Drew at round " << b.size() - 1;
    }
    else if(b_win > 0)
    {
        for(int i = 0; i < b.size(); i++)
        {
            cout << b[i] << ' ';
        }
        cout << ": Won at round " << b.size();
    }
    else
    {
        for(int i = 0; i < b.size(); i++)
        {
            cout << b[i] << ' ';
        }
        cout << ": Lost at round " << b.size();
    }
    cout << '\n';
    return 0;
}
