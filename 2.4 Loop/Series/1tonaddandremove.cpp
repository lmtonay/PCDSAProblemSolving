#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, res = 0, lastOperation = 1;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    int toBeAdded = lastOperation * i;

    res += toBeAdded;

    if (lastOperation == -1) lastOperation = 1;
    else lastOperation = -1;

  }

  cout << res << endl;

  return 0;
}