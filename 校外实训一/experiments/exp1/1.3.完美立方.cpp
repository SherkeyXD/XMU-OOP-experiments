#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int a, b, c, d;

    cin >> n;

    for (a = 2; a <= n; a++)
        for (b = 2; b < a; b++)
            for (c = b; c < a; c++)
                for (d = c; d < a; d++)
                    if (a * a * a == b * b * b + c * c * c + d * d * d)
                        cout << "Cube = " << a << ", Triple = (" << b << "," << c << "," << d << ")" << endl;

    return 0;
}
