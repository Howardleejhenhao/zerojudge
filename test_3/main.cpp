#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

void show();
void line();
void Simple_interest();
void compound_interest();
void Installment_saving();
void pay_debt();

int main()
{
    while(1)
    {
        cout << "比率換算\n";
        cout << "請問想要換算的方式為？\n";
        show();
        cout << "請輸入：";
        int which;
        cin >> which;
        line();
        if(which > 5 || which < 1)
        {
            cout << "輸入格式錯誤，請重新輸入\n";
            line();
            continue;
        }
        else if(which == 5)
        {
            break;
        }
        else if(which == 1)
        {
            Simple_interest();
        }
        else if(which == 2)
        {
            compound_interest();
        }
        else if(which == 3)
        {
            Installment_saving();
        }
        else if(which == 4)
        {
            pay_debt();
        }
        line();
    }
    return 0;
}


void show()
{
    cout << "（１）單利換算\n";
    cout << "（２）複利換算\n";
    cout << "（３）零存整付\n";
    cout << "（４）分期付款\n";
    cout << "（５）退出\n";
}

void line()
{
    cout << "--------------------\n";
}

void Simple_interest()
{
    double r;
    ll n, a, ans;
    cout << "單利計算\n";
    int flag = 1;
    while(flag)
    {
        cout << "請輸入存入金額：";
        cin >> a;
        if(a < 0)
        {
            cout << "輸入錯誤，請再輸入一次\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    while(flag)
    {
        cout << "請輸入存入期數：";
        cin >> n;
        if(n < 0)
        {
            cout << "輸入錯誤，請再輸入一次\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    while(flag)
    {
        cout << "請輸入利率：（單位為百分比，可為小數）\n";
        cin >> r;
        if(r < 0)
        {
            cout << "輸入錯誤，請再輸入一次\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    line();
    cout << "計算結果為：";
    ans = a * (1 + n * (r / 100));
    cout << ans << '\n';
}

void compound_interest()
{
    double r, ans;
    ll n, a;
    cout << "複利計算\n";
    int flag = 1;
    while(flag)
    {
        cout << "請輸入存入金額：";
        cin >> a;
        if(a < 0)
        {
            cout << "輸入錯誤，請再輸入一次\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    while(flag)
    {
        cout << "請輸入存入期數：";
        cin >> n;
        if(n < 0)
        {
            cout << "輸入錯誤，請再輸入一次\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    while(flag)
    {
        cout << "請輸入利率：（單位為百分比，可為小數）\n";
        cin >> r;
        if(r < 0)
        {
            cout << "輸入錯誤，請再輸入一次\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    line();
    cout << "計算結果為：";

    ans = a * pow((1 + (r / 100)), n);
    cout << (ll)ans << '\n';
}

void Installment_saving()
{
    double r, ans;
    ll n, a;
    cout << "零存整付\n";
    int flag = 1;
    while(flag)
    {
        cout << "請輸入每期存入金額：";
        cin >> a;
        if(a < 0)
        {
            cout << "輸入錯誤，請再輸入一次\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    while(flag)
    {
        cout << "請輸入總期數（月）：";
        cin >> n;
        if(n < 0)
        {
            cout << "輸入錯誤，請再輸入一次\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    while(flag)
    {
        cout << "請輸入年利率：（單位為百分比，可為小數）\n";
        cin >> r;
        if(r < 0)
        {
            cout << "輸入錯誤，請再輸入一次\n";
            continue;
        }
        flag = 0;
    }
    r /= 1200;
    r += 1;
    flag = 1;
    line();
    cout << "計算結果為：";

    ans = (a * r * (1 - pow(r, n))) / (1 - r);
    cout << ans << '\n';
}

void pay_debt()
{
    double r, ans;
    double n, a;
    cout << "分期付款\n";
    int flag = 1;
    while(flag)
    {
        cout << "請輸入貸款金額：";
        cin >> a;
        if(a < 0)
        {
            cout << "輸入錯誤，請再輸入一次\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    while(flag)
    {
        cout << "請輸入總期數（月）：";
        cin >> n;
        if(n < 0)
        {
            cout << "輸入錯誤，請再輸入一次\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    while(flag)
    {
        cout << "請輸入年利率：（單位為百分比，可為小數）\n";
        cin >> r;
        if(r < 0)
        {
            cout << "輸入錯誤，請再輸入一次\n";
            continue;
        }
        flag = 0;
    }
    r /= 1200;
    double cnt = a / n;
    double cp = a;
    while(cp > 0)
    {
        ans += cnt + cp * r;
        cp -= cnt;
        cout << ans << '\n';
    }
    flag = 1;
    line();
    cout << "總共需還：" << ans << '\n';
    cout << "每期需還：";
    ans /= n;
    cout << ans << '\n';
}
