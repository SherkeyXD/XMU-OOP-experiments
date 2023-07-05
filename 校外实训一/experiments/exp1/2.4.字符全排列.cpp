#include <bits/stdc++.h>
using namespace std;

int n;
bool vis[50];
int a[50];
char ch[50];

void dfs(int step)
{
	if (step == n + 1)
	{
		for (int i = 1; i <= n; i++)
			cout << ch[a[i]];
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
	string str;
	cin >> str;
	n = str.length();
	sort(str.begin(), str.end(), less<int>());
	for (int i = 0; i < n; i++)
		ch[i + 1] = str[i];
	dfs(1);
	return 0;
}
