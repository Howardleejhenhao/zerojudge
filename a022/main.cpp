#include <iostream>

using namespace std;

int main()
{

    string A;
    int ans = 1;

    cin >> A;

    for(int i = 0; i < A.length() / 2; i++)
    {
        if(A[i] == A[A.length() - i - 1])
        {
            ans = 1;
        }
        else
        {
            ans = 0;
            break;
        }
    }
    if(ans == 1)
    {
    cout << "yes" << endl;
    }
    else
    {
    cout << "no" << endl;

    }

    return 0;
}
