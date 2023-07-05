#include <bits/stdc++.h>
using namespace std;

// Ref: https://blog.csdn.net/Archipelago_/article/details/123615422

int res[92][8];
int path[8];
int cnt = 0;

void dfs(int n)
{
	if (n > 7)
	{
		for (int k = 0; k < 8; k++)
			res[cnt][k] = path[k];
		cnt++;
		return;
	}
	for (int i = 1; i <= 8; i++)
	{
		int k = 0;
		for (k = 0; k < n; k++)
			if ((path[k] == i) || abs(path[k] - i) == abs(n - k))
				break;
		if (k == n)
		{
			path[n] = i;
			dfs(n + 1);
		}
	}
}
int main()
{
	int T, n;
	memset(path, 0, sizeof(path));
	cnt = 0;
	dfs(0);
	cin >> T;
	while (T--)
	{
		cin >> n;
		for (auto i:res[n-1])
			cout << i;
		cout << endl;
	}
	return 0;
}