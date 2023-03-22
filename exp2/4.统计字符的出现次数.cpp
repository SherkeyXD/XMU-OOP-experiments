#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    int i,j,k;
    while(cin>>s)
    {
        int a[128]={0};
        int b[128]={0};
        for(i=0; i<128; i++)
            b[i]=i;
        for(i= 0 ; i < s.length() ; i++)
            a[s[i]]++;
        for(i=0; i<128; i++)
        {
            for(j=0; j<127-i; j++)
            {
                if(a[j]>a[j+1])
                {
                    k=a[j];
                    a[j]=a[j+1];
                    a[j+1]=k;
                    k=b[j];
                    b[j]=b[j+1];
                    b[j+1] = k;
                }
            }
        }
        for(i=127;i>=0;i--)
        {
            if(a[i]!=0)
                cout<<char(b[i])<<":"<<a[i]<<" ";
        }
        cout << endl;

    }

    return 0;
}