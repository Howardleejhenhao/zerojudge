#include <bits/stdc++.h>

using namespace std;

queue<int>num;

vector<int>input;

int main()
{
    int n;

    while(cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        input.clear();
        for(int i = 1; i <= n; i++) num.push(i);

        while(num.size() >= 1)
        {
            input.push_back(num.front());
            num.pop();
            num.push(num.front());
            num.pop();
        }

        cout << "Discarded cards: ";
        for(int i = 0; i < input.size() - 1; i++)
        {
            if(i == input.size() - 2)
            {
                cout << input[i];
                break;
            }
            cout << input[i] << ", ";
        }
        cout << '\n';
        cout << "Remaining card: ";
        cout << input[input.size() - 1] << '\n';


    }
    return 0;
}
