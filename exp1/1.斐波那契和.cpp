#include <iostream>
using namespace std;

int num[1005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, i, sum;
    int a, b, l, r;

    cin >> n;

    while(n--)
    {
        sum=0;
        for(i=0;i<1001;i++)
            num[i] = 0;
        cin >> a >> b >> l >> r;
        num[0] = a%1000 ; num[1] = b%1000;
        for(i=2;i<1001;i++)
            num[i] = (num[i-1]+num[i-2])%1000;
        for(i=l;i<=r;i++)
            sum += num[i];
        cout << sum % 1000 << endl;
    }

    return 0;
}