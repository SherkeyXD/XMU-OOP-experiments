#include <bits/stdc++.h>
using namespace std;

template <typename T>
vector<T> s_merge(vector<T> a, vector<T> b) {
    vector<T> res;
    res.resize(a.size() + b.size());
    merge(a.begin(), a.end(), b.begin(), b.end(), res.begin());
    return res;
}

template <typename T>
vector<T> merge_sort(vector<T> &arr)
{
    if (arr.size() < 2) return arr;
    const size_t mid = arr.size() / 2;
    vector<T> left(arr.begin(), arr.begin() + mid);
    vector<T> right(arr.begin() + mid, arr.end());
    return s_merge(merge_sort(left), merge_sort(right));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, tmp;
    vector<int> v;

    cin >> n;
    while (n--)
    {
        cin >> tmp;
        v.push_back(tmp);
    }

    v = merge_sort(v);

    for (auto i : v)
        cout << i << " ";

    return 0;
}
