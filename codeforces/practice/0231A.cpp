// https://codeforces.com/problemset/problem/231/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int probsolved = 0;
	cin >> n;
	while(n--)
	{
		int counter = 0;
		int arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];
		for(int i : arr)
		{
			if(i == 1)
				counter++;
		}
		if(counter > 1)
			probsolved++;
	}
	cout << probsolved;
}
