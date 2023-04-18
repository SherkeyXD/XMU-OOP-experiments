#include <bits/stdc++.h>
using namespace std;

bool isTriangle(int a, int b, int c)
{
    if(a+b>c and a+c>b and b+c>a)
        return true;
    else
        return false;
}

int canFormTriangle(int a[], int n)
{
    int max = -1;
    for(int i=0;i<n-2;i++)
        for(int j=i+1;j<n-1;j++)
            for(int k=j+1;k<n;k++)
                if(isTriangle(a[i], a[j], a[k]))
                    if(a[i]+a[j]+a[k]>max)
                        max = a[i]+a[j]+a[k];
    return max;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    while(cin>>n)
    {
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout << canFormTriangle(a, n) << endl;   
    }

    return 0;
}