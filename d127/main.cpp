#include <iostream>

using namespace std;

int main()
{
    long long num;
    while(cin >> num)
    {
        long long biggest = 0;
        num = num / 2;

        for(int i = 1; i < num / 2 + 1; i++){
            if((i * (num - i)) > biggest){
                biggest = i * (num - i);
                //cout << biggest << endl;
            }
        }

        cout << biggest << endl;
    }
    return 0;
}
