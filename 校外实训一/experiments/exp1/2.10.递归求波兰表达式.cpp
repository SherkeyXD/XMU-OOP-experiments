#include <bits/stdc++.h>
using namespace std;

double exp()
{
    string s;
    cin >> s;
    switch (s[0])
    {
    case '+':
        return exp() + exp();
    case '-':
        return exp() - exp();
    case '*':
        return exp() * exp();
    case '/':
        return exp() / exp();
    default:
        return stof(s);
        break;
    }
}

int main()
{
    cout << fixed << setprecision(6) << exp() << endl;
    return 0;
}
