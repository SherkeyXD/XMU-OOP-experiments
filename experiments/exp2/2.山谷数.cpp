#include <bits/stdc++.h>
using namespace std;

bool isValley(string s)
{
    int len = s.length();
    int i, j, k;
    bool flag = false;
    for (i = 0; i < len-1; i++)
    {
        if (s[i] < s[i + 1])
            flag = true;
        if (s[i] > s[i + 1] and flag)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    while(cin>>s)
    {
        if (isValley(s))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}