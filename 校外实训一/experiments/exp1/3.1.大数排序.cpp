#include <bits/stdc++.h>
using namespace std;

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

    sort(v.begin(), v.end(), less<int>());

    for (auto i : v)
        cout << i << " ";

    return 0;
}
