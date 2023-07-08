#include <bits/stdc++.h>
using namespace std;

int N[50] = {0};

int main()
{
    int n;
    cin >> n;

    N[0] = N[1] = 1;
    for (int i = 2; i <= 49; i++)
        N[i] = N[i - 1] + N[i - 2];

    cout << N[n] << endl;

    return 0;
}