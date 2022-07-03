#include <iostream>

using namespace std;

int main()
{
    float g, a, h, w;
    int num;

    cin >> num;
    float ans;

    for(int i = 0; i < num; i++)
    {
        cin >> g >> a >> h >> w;
        if(g)
        {
            ans = (13.7 * w) + (5 * h) - (6.8 * a) + 66;
        }
        else
        {
            ans = (9.6 * w) + (1.8 * h) - (4.7 * a) + 655;
        }
        //cout << ans << endl;
        printf("%.2f\n", ans);
    }

    return 0;
}
