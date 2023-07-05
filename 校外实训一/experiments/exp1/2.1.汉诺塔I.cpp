#include <bits/stdc++.h>
using namespace std;

void move(char a, char b)
{
	cout << a << "->" << b << endl;
}

void hanoi(int n, char a, char b, char c)
{
	if (n == 1)
		move(a, c);
	else
	{
		hanoi(n - 1, a, c, b);
		move(a, c);
		hanoi(n - 1, b, a, c);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	hanoi(n, 'A', 'B', 'C');

	return 0;
}
