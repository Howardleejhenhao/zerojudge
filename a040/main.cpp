#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b;
    int total = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
    {
        int num = i;
        int num_count = 0;
        while(num >= 1)
        {
            num_count += 1;
            num /= 10;
        }
        //cout << num_count << endl;
        num = i;
        int check_num = 0;
        for(int j = 0; j < num_count; j++)
        {
            check_num += pow(num % 10, num_count);
            num /= 10;
        }
        if(check_num == i)
        {
            cout << i << " ";
            total++;
        }

    }
    if(total == 0)
    {
        cout << "none" << endl;
    }

    //cout << "Hello world!" << endl;
    return 0;
}
