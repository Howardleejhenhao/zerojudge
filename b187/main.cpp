#include <iostream>

using namespace std;

int main()
{
    string str;
    int num;
    cout << "�Q���i���ܪk  �۹������Q�i���ܪk" << endl;
    while(cin >> str)
    {
        num = 0;
        if((int)str[0] > 64)
            num += ((int)str[0] - 55) * 16;
        else
            num += ((int)str[0] - 48) * 16;

        if((int)str[1] > 64)
            num += ((int)str[1] - 55);
        else
            num += (int)str[1] - 48;
        cout<< string(6,' ')<<str<<string(17,' ')<<num<<endl;
    }

    return 0;
}
