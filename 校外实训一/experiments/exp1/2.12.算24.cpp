#include <bits/stdc++.h>
using namespace std;

// Ref: https://blog.csdn.net/weixin_45653525/article/details/103801172

bool dfs(double a[], int n)
{
    if (n == 1)
    {
        if (fabs(a[0] - 24) <= 1e-6)
            return true;
        else
            return false;
    }
    double b[5];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int m = 0;
            for (int k = 0; k < n; k++)
                if (k != i && k != j)
                    b[m++] = a[k];
            b[m] = a[i] + a[j];
            if (dfs(b, m + 1))
                return true;
            b[m] = a[i] - a[j];
            if (dfs(b, m + 1))
                return true;
            b[m] = a[j] - a[i];
            if (dfs(b, m + 1))
                return true;
            b[m] = a[i] * a[j];
            if (dfs(b, m + 1))
                return true;
            if (a[j] != 0)
            {
                b[m] = a[i] / a[j];
                if (dfs(b, m + 1))
                    return true;
            }
            if (a[i] != 0)
            {
                b[m] = a[j] / a[i];
                if (dfs(b, m + 1))
                    return true;
            }
        }
    }
    return false;
}

int main()
{
    double a[4];
    while (cin >> a[0] >> a[1] >> a[2] >> a[3])
    {
        if (fabs(a[0]+a[1]+a[2]+a[3]) < 1e-6)
            break;
        if (dfs(a, 4))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}