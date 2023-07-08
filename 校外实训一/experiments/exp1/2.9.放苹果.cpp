#include <bits/stdc++.h>
using namespace std;

int f(int x, int y)
{
    if (x < y)
        return f(x, x);
    if (x == 0 or y == 1)
        return 1;
    if (x < 0 or y <= 0)
        return 0;
    return f(x, y - 1) + f(x - y, y);
}

int main()
{
    int t, m, n;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        cout << f(m, n) << endl;
    }
    return 0;
}