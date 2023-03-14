#include <iostream>
#include <cmath>
using namespace std;

class circle
{
    public:
       double x, y, r;

       bool operator* (const circle& b) //是否击中？
       {
            double d = sqrt((this->x-b.x)*(this->x-b.x) + (this->y-b.y)*(this->y-b.y));
            return (d<=this->r+b.r) ? true:false;
       }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,p,i,times=0;

    cin >> n;
    circle c[n];

    for(i=0;i<n;i++)
        cin >> c[i].x >> c[i].y >> c[i].r;
    cin >> p;
    
    for(i=0;i<n;i++)
    {
        if(i==p) continue;
        if(c[p]*c[i]) times++;
    }

    if(times==0) cout << "Alive" << endl;
    else cout << "Biu" << endl;

    return 0;
}