#include <bits/stdc++.h>
using namespace std;

// Ref: https://www.bilibili.com/video/BV1Zi4y1N7dU/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int minTimes = 114514;
    string tmp;
    cin >> tmp;
    bitset<32> cur(tmp);
    cin >> tmp;
    bitset<32> tar(tmp);

    int n = tmp.size();

    for (int p = 0; p < 2; p++)
    {
        int times = 0, next = p;
        bitset<32> lock = cur;

        for (int i = 0; i < n; i++)
        {
            if (next)
            {
                times++;
                if (i > 0)  lock.flip(i - 1);
                if (i < n - 1)  lock.flip(i + 1);
                lock.flip(i);
            }
            next = (lock[i] != tar[i]);
        }
        if (lock == tar)
            minTimes = min(minTimes, times);
    }


    if (minTimes == 114514)
        cout << "impossible";
    else
        cout << minTimes;

    return 0;
}
