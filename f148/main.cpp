#include <bits/stdc++.h>
#define ll long long
#define ss stringstream
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main()
{
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "r", stdout);

    int w, h;
    cin >> w >> h;
    string s[w];
    int n;
    cin >> n;
    vector<pair<int, int>> v(30);
    for(int i = 0; i < 30; i++)
    {
        v[i].first = -1;
        v[i].second = -1;
    }
    int cnt = 0;
    for(int i = 0; i < w; i++)
    {
        for(int j = 0; j < h; j++)
        {
            cin >> s[i][j];

            if(s[i][j] != '0')
            {
                cnt++;
                v[s[i][j] - 'a'].first = i;
                v[s[i][j] - 'a'].second = j;
            }
        }
    }
    if(cnt < n)
    {
        cout << "Mission fail.\n";
        return 0;
    }



    int i = 0;
    int index = 0;
    while(i < n)
    {
        if(v[index].first != -1 && v[index].second != -1)
        {

            cout << v[index].first << ' ' << v[index].second << '\n';
            i++;
        }
        index++;
    }


    return 0;
}

/*
5 5
5
0 0 a 0 0
0 b 0 0 0
c 0 0 0 0
0 d 0 0 0
0 0 e 0 0



2 2
4
g e
f d




4 4
5
z 0 0 0
c 0 0 0
a 0 0 0
g 0 0 0


3 3
6
x c a
b 0 y
0 g 0



5 5
10
f g h i j
k l m n o
a b c d e
p q r s t
u v w x y

*/
