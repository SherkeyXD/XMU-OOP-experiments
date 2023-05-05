#include <bits/stdc++.h>
using namespace std;
const double PI = 3.14159265357;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,i,r,a;
    double sum=0;

    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> r >> a;
        sum += PI*r*r*(a/360.0);
    }
    cout << fixed << setprecision(3) << sum << endl;


    return 0;
}