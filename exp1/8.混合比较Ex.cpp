#include <bits/stdc++.h>
using namespace std;

void Stringsplit(string str, const char split, vector<string> &v)
{
    istringstream iss(str);
    string tmp;
    while (getline(iss, tmp, split))
        v.push_back(tmp);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int len, tmp = 0, n = 0, j = 0;
    string s;
    vector<string> v;

    cin >> s;
    Stringsplit(s, ',', v);
    len = v.size();
    int num[len];

    for (auto i : v)
    {
        if (i[0] == '0' and i[1] == 'x')
            num[j] = stoi(i.substr(2, i.length()), nullptr, 16);
        else if (i[0] == '0' and i[1] == 'b')
            num[j] = stoi(i.substr(2, i.length()), nullptr, 2);
        else if (i[0] == '0')
            num[j] = stoi(i.substr(1, i.length()), nullptr, 8);
        else
            num[j] = stoi(i, nullptr, 10);
        j++;
    }

    qsort(num, len, sizeof(int), [](const void *a, const void *b) -> int
          { return *(int *)a - *(int *)b; });

    cout << num[0];
    for (int i = 1; i < len; i++)
        cout << ',' << num[i];
    return 0;
}