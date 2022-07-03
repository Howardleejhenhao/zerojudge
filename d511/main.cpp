#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int total = 0;
    for(int i = 0; i < 5; i ++)
    {
     cin >> a >> b >> c;
     if(a + b > c)
     {
         if(b + c > a)
         {
             if(a + c > b)
             {
                 total += 1;
             }
         }
     }
    }

    cout << total << endl;
    return 0;
}
