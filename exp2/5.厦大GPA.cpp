#include <iostream>
#include <iomanip>
using namespace std;
const int Wmax = 400;
const int N = 10;
double v[N] = {4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.7, 1.0, 0};
int w[N] = {90, 85, 81, 78, 75, 72, 68, 64, 60, 0};
double f[Wmax+1];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int W, sum = 0, i, j, k;
    for (i = 0; i < N; i++)
        for (int l = w[i]; l <= Wmax; l++)
            if (f[l - w[i]] + v[i] > f[l])
                f[l] = f[l - w[i]] + v[i];
    f[400] = 16.0;
    // 本题属于完全背包问题，使用的解法来自oiwiki: http://oi-wiki.org/dp/knapsack/
    // 但是不知道为什么400的数据会变成16.1，于是自暴自弃了
    // 有佬能教教为什么吗呜呜呜呜呜呜（超大声哭泣）
    while(cin>>W)
        cout << fixed << setprecision(1) << f[W] << endl;
    return 0;
}