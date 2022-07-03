#include <iostream>

using namespace std;

int main()
{
    int h, m, s, t;

    cin >> h >> m >> s >> t;

    int now = h * 3600 + m * 60 + s;
    int go = t * 5400;
    now = now + go;
    if(now > 86400)now = now % 129600;
    else if(now < 0)now = 129600 + now;
    cout << now / 3600 << ":";
    now = now % 3600;
    if(now / 60 < 10)
    {
        cout << "0" << now / 60 << ":";
    }
    else
    {
        cout << now / 60 << ":";
    }
    now = now % 60;
    if(now < 10)
    {
        cout << "0" << now;
    }
    else
    {
        cout << now;
    }

    return 0;
}
