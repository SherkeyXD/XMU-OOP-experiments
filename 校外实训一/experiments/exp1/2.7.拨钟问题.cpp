#include <bits/stdc++.h>
using namespace std;

// Ref: https://blog.csdn.net/hejnhong/article/details/104448861

int main()
{
	int oriClock[10]={0}, curClock[10]={0}, move[10]={ 0 };

	for (int i = 1; i < 10; ++i)
		cin >> oriClock[i];

	for (move[1] = 0; move[1] < 4; ++move[1])
	{
		for (move[2] = 0; move[2] < 4; ++move[2])
		{
			for (move[3] = 0; move[3] < 4; ++move[3])
			{
				memcpy(curClock, oriClock, sizeof(oriClock));

				curClock[1] = (curClock[1] + move[1] + move[2]) % 4;
				curClock[2] = (curClock[2] + move[1] + move[2] + move[3])%4;
				curClock[3] = (curClock[3] + move[2] + move[3]) % 4;
				
				curClock[4] = (curClock[4] + move[1]) % 4;
				curClock[5] = (curClock[5] + move[1] + move[3]) % 4;
				curClock[6] = (curClock[6] + move[3]) % 4;
				
				move[4] = (4 - curClock[1]) % 4;
				move[5] = (4 - curClock[2]) % 4;
				move[6] = (4 - curClock[3]) % 4;

				curClock[4] = (curClock[4] + move[4] + move[5]) % 4;
				curClock[5] = (curClock[5] + move[5]) % 4;
				curClock[6] = (curClock[6] + move[5] + move[6]) % 4;
				
				curClock[7] = (curClock[7] + move[4]) % 4;
				curClock[8] = (curClock[8] + move[5]) % 4;
				curClock[9] = (curClock[9] + move[6]) % 4;
				
				move[7]= (4 - curClock[4]) % 4;
				move[9] = (4 - curClock[6]) % 4;
				
				curClock[5]= (curClock[5] + move[7] + move[9]) % 4;
				
				curClock[7] = (curClock[7] + move[7]) % 4;
				curClock[8] = (curClock[8] + move[7] + move[9]) % 4;
				curClock[9] = (curClock[9] + move[9]) % 4;

				move[8] = (4 - curClock[8]) % 4;
				
				curClock[7] = (curClock[7] + move[8]) % 4;
				curClock[9] = (curClock[9] + move[8]) % 4;

				if (curClock[5] + curClock[7] + curClock[9] == 0)
				{
					for (int i = 1; i < 10; ++i)
						while(move[i]--)
							cout << i << " ";
					return 0;
				}

			}
		}
	}
	return 0;
}
