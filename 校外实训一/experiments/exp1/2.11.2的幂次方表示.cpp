#include <bits/stdc++.h>
using namespace std;

int n[16];
void solve(int a)
{
    if (a == 0)
    {
        cout << "0";
        return;

    }
    for (int i = 15; i >= 0; i--)
        if (a >= n[i])
        {
            cout << "2";
            if (i != 1)
            {
                cout << "(";
                solve(i);
                cout << ")";
            }
            a -= n[i];
            if (a)
                cout << "+";
        }
}

int main()
{
    for (int i = 0; i < 16; i++)
        n[i] = pow(2, i);

    int a;
    cin >> a;
    solve(a);

    return 0;
}
