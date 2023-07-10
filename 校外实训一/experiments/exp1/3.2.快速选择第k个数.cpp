#include <bits/stdc++.h>
using namespace std;

// Ref: https://oi-wiki.org/basic/quick-sort/#%E5%AE%9E%E7%8E%B0c

auto find_kth_element(auto arr[], int rk, const int len)
{
    if (len <= 1) return arr[0];
    const auto pivot = arr[rand() % len];
    int i = 0, j = 0, k = len;
    while (i < k)
    {
        if (arr[i] < pivot) swap(arr[i++], arr[j++]);
        else if (pivot < arr[i]) swap(arr[i], arr[--k]);
        else i++;
    }
    if (rk < j) return find_kth_element(arr, rk, j);
    else if (rk >= k) return find_kth_element(arr + k, rk - k, len - k);
    return pivot;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << find_kth_element(a, k - 1, n);

    return 0;
}
