#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    int p, e, i, d;

    while (1)
    {
        cin >> p >> e >> i >> d;
        if (p == -1 && e == -1 && i == -1 && d == -1)
            break;
        int ans = (5544 * p + 14421 * e + 1288 * i - d + 21252) % 21252;
        // 利用中国剩余定理   Ref:https://zhuanlan.zhihu.com/p/103394468
        ans = (ans == 0) ? 21252 : ans;
        cout << "Case " << ++n << ": the next triple peak occurs in " << ans << " days." << endl;
    }

    return 0;
}
