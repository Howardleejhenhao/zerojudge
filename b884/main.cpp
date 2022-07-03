#include <iostream>

using namespace std;

int main()
{
    int num;
    int a, b;
    int yee;
    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> a >> b;
        yee = 100 - (a + b);
        if(yee > 0 && yee <= 30){
            cout << "sad!" << endl;
        }
        else if(yee <= 60){
            cout << "hmm~~" << endl;
        }
        else if (yee < 100){
            cout << "Happyyummy" << endl;
        }
        else{
            cout << "evil!!" << endl;
        }
    }
    return 0;
}
