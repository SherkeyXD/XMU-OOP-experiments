#include <bits/stdc++.h>
using namespace std;

class matrix
{
private:
    int lights[6][8];
    int times[6][8];

public:
    matrix()
    {
        for (int i = 1; i < 6; i++)
            for (int j = 1; j < 7; j++)
                cin >> this->lights[i][j];
        for (int i = 0; i < 6; i++)
            for (int j = 0; j < 8; j++)
                times[i][j] = 0;
    }
    bool guess()
    {
        int i, j;
        for (i = 2; i <= 5; i++)
            for (j = 1; j <= 6; j++)
                times[i][j] = (times[i - 1][j] + lights[i - 1][j] + times[i - 1][j - 1] + times[i - 2][j] + times[i - 1][j + 1]) % 2;
        for (j = 1; j <= 6; j++)
            if (lights[5][j] != (times[5][j] + times[5][j - 1] + times[5][j + 1] + times[4][j]) % 2)
                return false;
        return true;
    }
    void solve()
    {
        for (int i = 1; i <= 6; i++)
            times[1][i] = 0;
        while (!guess())
        {
            int c = 1;
            times[1][1]++;
            while (times[1][c] > 1)
            {
                times[1][c] = 0;
                c++;
                times[1][c]++;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 6; j++)
                cout << times[i][j] << " ";
            cout << endl;
        }
    }
}

;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        matrix m;
        cout << "PUZZLE #" << i << endl;
        m.solve();
        m.print();
    }

    return 0;
}