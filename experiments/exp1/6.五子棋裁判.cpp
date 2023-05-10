#include <bits/stdc++.h>
using namespace std;

int judge(string *a, int tmp)
{
    int x, y;
    for (x = 0; x < tmp; x++)
        for (y = 0; y < tmp; y++)
        {
            if (a[x][y] == '.')
                continue;
            else if (
                (a[x][y] == a[x][y + 1] and a[x][y] == a[x][y + 2] and a[x][y] == a[x][y + 3] and a[x][y] == a[x][y + 4]) or                 // 横
                (a[x][y] == a[x + 1][y] and a[x][y] == a[x + 2][y] and a[x][y] == a[x + 3][y] and a[x][y] == a[x + 4][y]) or                 // 纵
                (a[x][y] == a[x - 1][y + 1] and a[x][y] == a[x - 2][y + 2] and a[x][y] == a[x - 3][y + 3] and a[x][y] == a[x - 4][y + 4]) or // 右下
                (a[x][y] == a[x + 1][y + 1] and a[x][y] == a[x + 2][y + 2] and a[x][y] == a[x + 3][y + 3] and a[x][y] == a[x + 4][y + 4]))   // 右上
            {
                if (a[x][y] == 'W')
                    return 1;
                else if (a[x][y] == 'B')
                    return -1;
            }
            else
                continue;
        }
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int flag = 0;
    int n, tmp, i;

    cin >> n;

    while (n--)
    {
        cin >> tmp;
        string s[tmp];

        for (i = 0; i < tmp; i++)
            cin >> s[i];

        int l = judge(s, tmp);
        if (l == 1)
            cout << "White" << endl;
        else if (l == -1)
            cout << "Black" << endl;
        else if (l == 0)
            cout << "Not so fast" << endl;
    }
    return 0;
}