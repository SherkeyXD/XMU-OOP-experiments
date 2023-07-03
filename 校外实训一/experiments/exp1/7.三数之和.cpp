#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int target, n;
    cin >> target >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        for (int j = i + 1, k = n - 1; j < k; j++)
        {
            while (j < k - 1 and a[i] + a[j] + a[k - 1] >= target)
                k--;
            if (a[i] + a[j] + a[k] == target)
                cout << a[i] << " " << a[j] << " " << a[k] << endl;
        }

    return 0;
}
