#include <iostream>

using namespace std;

int main()
{
    int num;
    while(cin >> num)
    {
        int total = 0;

        for(int i = 1; i < num; i++)
        {
            if(num % i == 0)
            {
                total += i;
            }
        }
        if(total > num)
        {
            cout << "�ռ�" << endl;
        }
        else if(num == total)
        {
            cout << "������" << endl;
        }
        else
        {
            cout << "����" << endl;
        }
    }

    return 0;
}
