#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m, n, i, j;
    while (cin >> m >> n)
    {
        int a[m + 2][n + 2];

        for (i = 1; i < m + 1; i++)
            for (j = 1; j < n + 1; j++)
                cin >> a[i][j];

        for (i = 0; i < m + 2; i++)
        {
            a[i][0] = a[i][1];
            a[i][n + 1] = a[i][n];
        }
        for (j = 0; j < n + 2; j++)
        {
            a[0][j] = a[1][j];
            a[m + 1][j] = a[m][j];
        }

        for (i = 0; i < m + 2; i++)
        {
            for (j = 0; j < n + 1; j++)
                cout << a[i][j] << " ";
            cout << a[i][n + 1] << endl;
        }
    }

    return 0;
}