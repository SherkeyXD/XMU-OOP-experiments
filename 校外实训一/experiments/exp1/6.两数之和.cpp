#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int target, n;
    cin >> target >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        for (int j = n - 1; j > i; j--)
            if (a[i] + a[j] == target)
                cout << i << " " << j;

    return 0;
}
