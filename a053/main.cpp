#include <iostream>

using namespace std;

int main()
{
    int n;
    int grade;
    while(cin >> n)
    {
        if(n <= 10)
        {
            grade = 6 * n;
        }
        else if(n <= 20)
        {
            grade = 60 + (n - 10) * 2;
        }
        else if(n <= 40)
        {
            grade = 80 + (n - 20);
        }
        else
        {
            grade = 100;
        }
        cout << grade << '\n';
    }
    return 0;
}
