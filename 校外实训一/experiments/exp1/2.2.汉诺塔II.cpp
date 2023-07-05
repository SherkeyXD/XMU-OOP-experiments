#include <bits/stdc++.h>
using namespace std;

void move(int n, char a, char b)
{
	cout << n << ":" << a << "->" << b << endl;
}

void hanoi(int n, char a, char b, char c)
{
	if (n == 1)
		move(1, a, c);
	else
	{
		hanoi(n - 1, a, c, b);
		move(n, a, c);
		hanoi(n - 1, b, a, c);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	char a, b, c;
	cin >> n >> a >> b >> c;
	hanoi(n, a, b, c);

	return 0;
}
