// https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		string word;
		cin >> word;
		if(word.length() <= 10)
		{
			cout << word << endl;
			continue;
		}
		else 
			cout << word[0] + to_string(word.length()-2) + word[word.length()-1] << endl;
	}
}
