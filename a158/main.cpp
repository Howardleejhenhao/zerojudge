#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num_list[100];
    string str;
    stringstream ss;
    int num;
    cin >> num;
    cin.ignore();
    for(int i = 0; i < num; i++)
    {
        int maxa = 1;
        str = "";
        getline(cin, str);
        ss << str;
        int j = -1;
        while(ss >> num_list[++j]);

        for(int k = 0; k < j; k++)
        {
            for(int l = k + 1; l < j; l++)
            {
                if(__gcd(num_list[k], num_list[l]) > maxa)
                    {
                        maxa = __gcd(num_list[k], num_list[l]);
                    }
            }
        }
        cout << maxa << endl;
        ss.clear();

    }
    return 0;
}
