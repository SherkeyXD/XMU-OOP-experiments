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
        for (int j = i + 1; j < n; j++)
            for (int k = i + 1, l = n - 1; k < l; k++)
            {
                while (k < l - 1 and a[i] + a[j] + a[k] + a[l - 1] >= target)
                    l--;
                if (a[i] + a[j] + a[k] + a[l] == target)
                    if (i < j and j < k)
                        cout << a[i] << " " << a[j] << " " << a[k] << " " << a[l] << endl;
            }

    return 0;
}
