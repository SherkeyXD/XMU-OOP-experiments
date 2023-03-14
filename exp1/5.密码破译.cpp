#include <iostream>
#include <map>
using namespace std;

bool isCh(char c)
{
    if (c >= 'A' and c <= 'Z')
        return true;
    else
        return false;
}

bool isSpace(char c)
{
    if (c == ' ')
        return true;
    else
        return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int i, j;
    string decode, pass;
    map<char, char> dict;

    getline(cin, decode);

    for (i = 0; i < decode.length(); i++)
        dict[decode[i]] = 'A' + i;

    getline(cin, pass);

    for (i = 0; i < pass.length(); i++)
        if (isCh(pass[i]))
            break;
    for (j = pass.length(); j > 0; j--)
        if (isCh(pass[j]))
            break;

    for (; i < j + 1; i++)
    {
        if (isCh(pass[i]))
            cout << dict[pass[i]];
        if (isSpace(pass[i]) and !isSpace(pass[i + 1]))
            cout << " ";
    }

    return 0;
}