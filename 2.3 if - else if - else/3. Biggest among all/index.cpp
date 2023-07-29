#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, highest = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    if (input > highest) highest = input;
  }

  cout << highest << endl;

  return 0;
}
