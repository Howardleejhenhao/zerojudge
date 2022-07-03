#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int num_list[num];
    for(int i = 0; i < num; i++)
    {
        int input;
        int output = 0;
        cin >> input;
        while(input > 0)
        {
            output = output * 10 + input % 10;
            input /= 10;
        }
        num_list[i] = output;
    }
    int biggest = 0;
    for(int i = 0; i < num; i++)
    {
        if(num_list[i] > biggest)
        {
            biggest = num_list[i];
        }
    }
    cout << biggest << endl;
    return 0;
}
