#include <iostream>
#include <string>
using namespace std;

bool isNum(char a)
{
    if (a >= '0' && a <= '9')
        return true;
    else
        return false;
}

bool legal(char a)
{
    if ((a >= 'a' and a <= 'z') or (a >= 'A' and a <= 'Z'))
        return true;
    else if (isNum(a) or a == '_')
        return true;
    else
        return false;
}

bool judge(string s)
{
    int i;
    int len = s.length();

    if (isNum(s[0]))
        return false;
    else
        for (i = 0; i < len; i++)
            if (!legal(s[i]))
                return false;
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, i;
    string s;

    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> s;
        if (judge(s))
            cout << "Great" << endl;
        else
            cout << "Bad" << endl;
    }

    return 0;
}