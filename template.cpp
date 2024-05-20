#include <bits/stdc++.h>
using namespace std;

void printArr(vector<> p_arr)
{
  for(int i = 0; i < p_arr.size(); i++)
  {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  vector<int> test = {1, 2, 3, 4};
  printArr(test);
}