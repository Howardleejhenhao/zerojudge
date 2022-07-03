#include <iostream>

using namespace std;

int main()
{
    int num;
    int biggest = 0;

    cin >> num;

    int list_1[num];
    for(int i = 0; i < num; i++)
    {
     cin >> list_1[i];
     if(list_1[i] > biggest)
     {
         biggest = list_1[i];
     }
    }

    cout << biggest << endl;
    return 0;
}
