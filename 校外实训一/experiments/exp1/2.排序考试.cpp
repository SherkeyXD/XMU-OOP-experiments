#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t, tmp;
    int i, j, k;

    cin >> n;
    for (i = 0; i < n; i++)
    {
        vector<int> a;
        cin >> t;
        for (j = 0; j < t; j++)
        {
            cin >> tmp;
            a.push_back(tmp);
        }
        sort(a.begin(), a.end(), less<int>());
        for (k = 0; k < t - 1; k++)
            cout << a[k] << " ";
        cout << a[t - 1] << endl;
        // 别问，问就是啥比oj格式
    }
    return 0;
}
