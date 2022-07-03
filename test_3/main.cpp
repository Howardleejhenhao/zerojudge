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
        cout << "��v����\n";
        cout << "�аݷQ�n���⪺�覡���H\n";
        show();
        cout << "�п�J�G";
        int which;
        cin >> which;
        line();
        if(which > 5 || which < 1)
        {
            cout << "��J�榡���~�A�Э��s��J\n";
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
    cout << "�]���^��Q����\n";
    cout << "�]���^�ƧQ����\n";
    cout << "�]���^�s�s��I\n";
    cout << "�]���^�����I��\n";
    cout << "�]���^�h�X\n";
}

void line()
{
    cout << "--------------------\n";
}

void Simple_interest()
{
    double r;
    ll n, a, ans;
    cout << "��Q�p��\n";
    int flag = 1;
    while(flag)
    {
        cout << "�п�J�s�J���B�G";
        cin >> a;
        if(a < 0)
        {
            cout << "��J���~�A�ЦA��J�@��\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    while(flag)
    {
        cout << "�п�J�s�J���ơG";
        cin >> n;
        if(n < 0)
        {
            cout << "��J���~�A�ЦA��J�@��\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    while(flag)
    {
        cout << "�п�J�Q�v�G�]��쬰�ʤ���A�i���p�ơ^\n";
        cin >> r;
        if(r < 0)
        {
            cout << "��J���~�A�ЦA��J�@��\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    line();
    cout << "�p�⵲�G���G";
    ans = a * (1 + n * (r / 100));
    cout << ans << '\n';
}

void compound_interest()
{
    double r, ans;
    ll n, a;
    cout << "�ƧQ�p��\n";
    int flag = 1;
    while(flag)
    {
        cout << "�п�J�s�J���B�G";
        cin >> a;
        if(a < 0)
        {
            cout << "��J���~�A�ЦA��J�@��\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    while(flag)
    {
        cout << "�п�J�s�J���ơG";
        cin >> n;
        if(n < 0)
        {
            cout << "��J���~�A�ЦA��J�@��\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    while(flag)
    {
        cout << "�п�J�Q�v�G�]��쬰�ʤ���A�i���p�ơ^\n";
        cin >> r;
        if(r < 0)
        {
            cout << "��J���~�A�ЦA��J�@��\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    line();
    cout << "�p�⵲�G���G";

    ans = a * pow((1 + (r / 100)), n);
    cout << (ll)ans << '\n';
}

void Installment_saving()
{
    double r, ans;
    ll n, a;
    cout << "�s�s��I\n";
    int flag = 1;
    while(flag)
    {
        cout << "�п�J�C���s�J���B�G";
        cin >> a;
        if(a < 0)
        {
            cout << "��J���~�A�ЦA��J�@��\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    while(flag)
    {
        cout << "�п�J�`���ơ]��^�G";
        cin >> n;
        if(n < 0)
        {
            cout << "��J���~�A�ЦA��J�@��\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    while(flag)
    {
        cout << "�п�J�~�Q�v�G�]��쬰�ʤ���A�i���p�ơ^\n";
        cin >> r;
        if(r < 0)
        {
            cout << "��J���~�A�ЦA��J�@��\n";
            continue;
        }
        flag = 0;
    }
    r /= 1200;
    r += 1;
    flag = 1;
    line();
    cout << "�p�⵲�G���G";

    ans = (a * r * (1 - pow(r, n))) / (1 - r);
    cout << ans << '\n';
}

void pay_debt()
{
    double r, ans;
    double n, a;
    cout << "�����I��\n";
    int flag = 1;
    while(flag)
    {
        cout << "�п�J�U�ڪ��B�G";
        cin >> a;
        if(a < 0)
        {
            cout << "��J���~�A�ЦA��J�@��\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    while(flag)
    {
        cout << "�п�J�`���ơ]��^�G";
        cin >> n;
        if(n < 0)
        {
            cout << "��J���~�A�ЦA��J�@��\n";
            continue;
        }
        flag = 0;
    }
    flag = 1;
    while(flag)
    {
        cout << "�п�J�~�Q�v�G�]��쬰�ʤ���A�i���p�ơ^\n";
        cin >> r;
        if(r < 0)
        {
            cout << "��J���~�A�ЦA��J�@��\n";
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
    cout << "�`�@���١G" << ans << '\n';
    cout << "�C�����١G";
    ans /= n;
    cout << ans << '\n';
}
