#include <bits/stdc++.h>
using namespace std;

// Ref: https://oi-wiki.org/search/dfs/#%E4%BE%8B%E9%A2%98

int n;
bool vis[50];
int a[50];

void dfs(int step)
{
	if (step == n + 1)
	{
		for (int i = 1; i <= n; i++)
			cout << a[i] << " ";
		cout << endl;
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (vis[i] == 0)
		{
			vis[i] = 1;
			a[step] = i;
			dfs(step + 1);
			vis[i] = 0;
		}
	}
	return;
}

int main()
{
	cin >> n;
	dfs(1);
	return 0;
}
