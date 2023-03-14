#include <iostream>
#include <cmath>
using namespace std;

int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x, y, z;
    int i, j;
    int tmp, max = 0;

    cin >> x >> y >> z;

    cin >> dec;
    for (i = 0; i < x; i++)
    {
        cin >> tmp;
        if (tmp > max)
        {
            max = tmp;
            j = 10;
        }
    }

    cin >> oct;
    for (i = x; i < x + y; i++)
    {
        cin >> tmp;
        if (tmp > max)
        {
            max = tmp;
            j = 8;
        }
    }

    cin >> hex;
    for (i = x + y; i < x + y + z; i++)
    {
        cin >> tmp;
        if (tmp > max)
        {
            max = tmp;
            j = 16;
        }
    }

    if (j == 10)
        cout << dec << max;
    else if (j == 8)
        cout << oct << max;
    else
        cout << hex << max;

    return 0;
}