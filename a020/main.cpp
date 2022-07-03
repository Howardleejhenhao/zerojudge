#include <iostream>

using namespace std;

int count_e(char first)
{
    int num = 0, total_e = 0;
    if(first == 'A')
    {
        num = 10;
    }
    else if(first == 'B')
    {
        num = 11;
    }
    else if(first == 'C')
    {
        num = 12;
    }
    else if(first == 'D')
    {
        num = 13;
    }
    else if(first == 'E')
    {
        num = 14;
    }
    else if(first == 'F')
    {
        num = 15;
    }
    else if(first == 'G')
    {
        num = 16;
    }
    else if(first == 'H')
    {
        num = 17;
    }
    else if(first == 'I')
    {
        num = 34;
    }
    else if(first == 'J')
    {
        num = 18;
    }
    else if(first == 'K')
    {
        num = 19;
    }
    else if(first == 'L')
    {
        num = 20;
    }
    else if(first == 'M')
    {
        num = 21;
    }
    else if(first == 'N')
    {
        num = 22;
    }
    else if(first == 'O')
    {
        num = 35;
    }
    else if(first == 'P')
    {
        num = 23;
    }
    else if(first == 'Q')
    {
        num = 24;
    }
    else if(first == 'R')
    {
        num = 25;
    }
    else if(first == 'S')
    {
        num = 26;
    }
    else if(first == 'T')
    {
        num = 27;
    }
    else if(first == 'U')
    {
        num = 28;
    }
    else if(first == 'V')
    {
        num = 29;
    }
    else if(first == 'W')
    {
        num = 32;
    }
    else if(first == 'X')
    {
        num = 30;
    }
    else if(first == 'Y')
    {
        num = 31;
    }
    else if(first == 'Z')
    {
        num = 33;
    }
    total_e += (num % 10) * 9;
    total_e += num / 10;
    return total_e;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    int total = 0, pl = 0;

    cin >> str;
    total += (int)str[9] - 48;

    for(int i = 1; i < 9; i++)
    {
        total += (((int)str[i]) - 48) * (9 - i);
    }
    total += count_e(str[0]);
    if(total % 10 == 0)
    {
        cout << "real" << endl;
    }
    else
    {
        cout << "fake" << endl;
    }

    return 0;
}
