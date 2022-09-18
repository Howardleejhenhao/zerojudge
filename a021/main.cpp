/*
|----|   |----|
|    |   |    |
|    ----|    |
|             |
|    ----|    |
|    |   |    |
|----|   |----|

*/
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
#define ll long long

using namespace std;

// a < b
bool less_than(int a[], int b[])
{
    // �q����ƶ}�l��A��������Ƭۤ���C
    for (int i=520; i>=0; i--)
        if (a[i] != b[i])   // �@��ab���@�ˤj�A���W�^�ǵ��G�C
            return a[i] < b[i];
    return false;   // �����۵�
}

// c = a + b;
void add(int a[], int b[], int c[])
{
    for (int i=0; i<550; i++)   // ��������Ƭۥ[
        c[i] = a[i] + b[i];

    for (int i=0; i<550-1; i++) // �@�f��i��
    {
        c[i+1] += c[i] / 10;    // �i��
        c[i] %= 10;             // �i���l�U����
    }
}

void sub(int a[], int b[], int c[])
{
    for (int i=0; i<550; i++)
        c[i] = a[i] - b[i];

    for (int i=0; i<550-1; i++) // �@�f��ɦ�M�ɦ�
        if (c[i] < 0)
        {
            c[i+1]--;           // �ɦ�
            c[i] += 10;         // �ɦ�
        }
}

void mul(int a[], int b[], int c[])
{
    for (int i=0; i<550; i++)
        c[i] = 0;

    for (int i=0; i<550; i++)
        for (int j=0; j<550; j++)
            if (i+j < 550)
                c[i+j] += a[i] * b[j];

    for (int i=0; i<550-1; i++) // �@�f��i��
    {
        c[i+1] += c[i] / 10;
        c[i] %= 10;
    }
}

void mul2(int a[], int b, int c[])
{
    for (int i=0; i<550; i++)
        c[i] = a[i] * b;

    for (int i=0; i<550; i++) // �@�f��i��
    {
        c[i+1] += c[i] / 10;
        c[i] %= 10;
    }
}

void div(int a[], int b[], int c[])
{
    int t[600];

    for (int i=550; i>=0; i--)
        for (int k=9; k>0; k--) // ���հӼ�
        {
            mul2(b+i, k, t);
            if (!less_than(a+i, t))
            {
                sub(a+i, t, c+i);
                break;
            }
        }
}

void solve()
{
    string aa, bb;
    char d;
    cin >> aa >> d >> bb;
    int a[600], b[600], c[600];
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));
    for(int i = 0; i < aa.size(); i++)
    {
        a[aa.size() - i - 1] = aa[i] - '0';
    }
    for(int i = 0; i < bb.size(); i++)
    {
        b[bb.size() - i - 1] = bb[i] - '0';
    }
    if(d == '+') add(a, b, c);
    else if(d == '-') sub(a, b, c);
    else if(d == '*') mul(a, b, c);
    else div(a, b, c);
    int flag = 0;
    for(int i = 550; i >= 0; i--)
    {
        if(!flag && c[i] == 0) continue;
        flag = 1;
        cout << c[i];
    }

    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
