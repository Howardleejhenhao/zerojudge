#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string name;
    string h;

    getline(cin, name);
    getline(cin, h);
    stringstream ss;
    ss << name;
    string str;
    while(ss >> str)
    {
        cout << h << ", " << str << '\n';
    }
    return 0;
}
