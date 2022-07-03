#include <iostream>

using namespace std;

int main()
{
    int n, m, a, b, biggest, biggest_index, total, average;
    int out_min, out_sec;
    biggest_index = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        biggest = 3700;
        total = 0;
        average = 0;
        cin >> m;
        int time[m];
        int a_list[m];
        int b_list[m];
        for(int j = 0; j < m; j++)
        {
            cin >> a >> b;
            time[j] = a * 60 + b;
            a_list[j] = a;
            b_list[j] = b;
        }
        for(int q = 0; q < m; q++)
        {
            if(time[q] < biggest)
            {
                biggest = time[q];
                biggest_index = q;
            }
        }
        for(int e = 0; e < m; e++)
        {
            total += time[e];
        }
        average = total / m;
        out_min = average / 60;
        out_sec = average - out_min * 60;
        cout << "Track " << i + 1 << ":" << endl;
        cout << "Best Lap: " << a_list[biggest_index] << " minute(s) " << b_list[biggest_index] << " second(s)." << endl;
        cout << "Average: " << out_min << " minute(s) " << out_sec << " second(s)." << endl;
    }

    return 0;
}
