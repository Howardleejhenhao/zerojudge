#include <iostream>
#include <map>
#include <sstream>

using namespace std;

map<string, char> m;

int main()
{
    m[".-"] = 'A';
    m["-..."] = 'B';
    m["-.-."] = 'C';
    m["-.."] = 'D';
    m["."] = 'E';
    m["..-."] = 'F';
    m["--."] = 'G';
    m["...."] = 'H';
    m[".."] = 'I';
    m[".---"] = 'J';
    m["-.-"] = 'K';
    m[".-.."] = 'L';
    m["--"] = 'M';
    m["-."] = 'N';
    m["---"] = 'O';
    m[".--."] = 'P';
    m["--.-"] = 'Q';
    m[".-."] = 'R';
    m["..."] = 'S';
    m["-"] = 'T';
    m["..-"] = 'U';
    m["...-"] = 'V';
    m[".--"] = 'W';
    m["-..-"] = 'X';
    m["-.--"] = 'Y';
    m["--.."] = 'Z';
    int n;
    cin >> n;
    cin.ignore();
    string str;
    string in;
    stringstream ss;
    while(n--)
    {
        getline(cin, str);
        ss << str;
        while(ss >> in)
        {
            cout << m[in];
        }
        ss.clear();
        cout << '\n';
    }

    return 0;
}
