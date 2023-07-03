#include <bits/stdc++.h>
using namespace std;

const int month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int y, m, d, i, j;
    while(cin >> y >> m >> d)
    {
        for (i = 0; i < m - 1; i++)
            d += month[i];
        cout << d << endl;
    }
    return 0;
}