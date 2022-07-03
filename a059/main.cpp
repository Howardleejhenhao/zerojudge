#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b;
    int num = 1;
    while(n--)
    {
        int total = 0;
        cin >> a >> b;
        for(int i = a; i <= b; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                if(j * j == i)
                {
                    total += j * j;
                }
            }
        }
        cout << "Case " << num << ": " << total << "\n";
        num++;
    }
    return 0;
}
