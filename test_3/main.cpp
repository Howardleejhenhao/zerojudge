#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <climits>
#include <math.h>

using namespace std;

int main()
{
    for(int i = 3; i <= 50; i++) {
        double t = i;
        double m = ((3.0*t-6.0)-sqrt(18.0*t*t-36*t-24)) / (-6.0);
        double n = ((9.0*t)-sqrt(18.0*t*t-36*t-24)) / 6.0;
        cout << "When t = " << t << ", m = " << round(m) << ", n  = " << round(n) << '\n';

    }

    return 0;
}
