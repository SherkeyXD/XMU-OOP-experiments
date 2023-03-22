#include <iostream>
using namespace std;
const int Wmax = 400;
const int N = 10;
double v[N] = {4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.7, 1.0, 0};
int w[N] = {90, 85, 81, 78, 75, 72, 68, 64, 60, 0};
double f[Wmax];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int W, sum = 0, i, j, k;
    cin >> W;
    {
        for (i = 0; i < N; i++)
            for (int l = w[i]; l <= W; l++)
                if ( f[ l - w[i] ] + v[i] > f[l] )
                    f[l] = f[l - w[i]] + v[i];
        cout << f[W];
    }

    return 0;
}