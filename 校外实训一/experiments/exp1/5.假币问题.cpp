#include <bits/stdc++.h>
using namespace std;

// Ref: https://www.bilibili.com/video/BV1kM4y1u71y/

class coin
{
private:
    string left[3], right[3], res[3];

public:
    coin()
    {
        for (int i = 0; i < 3; i++)
            cin >> left[i] >> right[i] >> res[i];
    }
    void printFeitCoin()
    {
        for (char iCoin = 'A'; iCoin <= 'L'; iCoin++)
        {
            if (this->isFeitCoin(iCoin, true))
            {
                cout << iCoin << " is the counterfeit coin and it is light. " << endl;
                break;
            }
            else if (this->isFeitCoin(iCoin, false))
            {
                cout << iCoin << " is the counterfeit coin and it is heavy. " << endl;
                break;
            }
        }
    }
    bool isFeitCoin(char iCoin, bool isLight)
    {
        string c;
        c.push_back(iCoin);

        for (int i = 0; i < 3; i++)
        {
            string l = this->left[i], r = this->right[i];

            if (!isLight)
                swap(l, r);

            switch (this->res[i][0])
            {
            case 'e':
                if (l.find(c) != string::npos or r.find(c) != string::npos)
                    return false;
                break;
            case 'u':
                if (r.find(c) == string::npos)
                    return false;
                break;
            case 'd':
                if (l.find(c) == string::npos)
                    return false;
                break;
            }
        }
        return true;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    while (n--)
    {
        coin a;
        a.printFeitCoin();
    }

    return 0;
}
