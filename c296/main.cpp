#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[3];

    cin >> a[0] >> a[1] >> a[2];
    sort(begin(a), end(a));
    for(int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    if((a[0] + a[1]) <= a[2])
    {
        cout << "No" << endl;
    }
    else
    {
        if(a[0] * a[0] + a[1] * a[1] < a[2] * a[2])
        {
            cout << "Obtuse" << endl;
        }
        else if(a[0] * a[0] + a[1] * a[1] == a[2] * a[2])
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Acute" << endl;
        }
    }


    return 0;
}
