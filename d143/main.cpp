#include <iostream>

using namespace std;

int main()
{
    int num;
    int a, b;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cin >> a >> b;
        if(a > b)
        {
            cout << ">" << endl;
        }
        else if(a == b)
        {
            cout << "=" << endl;
        }
        else
        {
            cout << "<" << endl;
        }
    }
    return 0;
}
