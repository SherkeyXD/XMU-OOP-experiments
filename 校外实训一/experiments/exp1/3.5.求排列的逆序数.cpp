#include <bits/stdc++.h>
using namespace std;

long long sum = 0; // 逆序数的个数

template <typename T>
vector<T> s_merge(vector<T> a, vector<T> b)
{
    vector<T> res;
    res.reserve(a.size() + b.size());
    int aSize = a.size(), bSize = b.size();
    int i = 0, j = 0;
    while (i < aSize and j < bSize)
    {
        if (a[i] <= b[j])
        {
            res.push_back(a[i]);
            i++;
        }
        else
        {
            res.push_back(b[j]);
            j++;
            sum += aSize - i;
        }
    }
    while (i < aSize)
    {
        res.push_back(a[i]);
        i++;
    }
    while (j < bSize)
    {
        res.push_back(b[j]);
        j++;
    }
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
    cout << sum << endl;

    return 0;
}