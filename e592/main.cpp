#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> v;
    string s;
    stringstream ss;
    int n;
    cin >> n;
    getline(cin, s); // "\n"
    while(n--)
    {
        getline(cin, s);
        ss.clear();
        vector<int> v_time;
        vector<string> val;

        getline(cin, s);
        ss << s;
        int input;

        while(ss >> input)
        {
            v_time.push_back(input);
        }
        ss.clear();
        getline(cin, s);
        ss << s;
        string input_s;


        while(ss >> input_s)
        {
            val.push_back(input_s);
        }

        string ans[(int)v_time.size() + 1];


        for(int i = 0; i < v_time.size(); i++)
        {
            ans[v_time[i]] = val[i];
        }


        for(int i = 1; i <= v_time.size(); i++)
        {
            cout << ans[i] << '\n';
        }

        cout << '\n';
    }



    return 0;
}
