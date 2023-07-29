#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n, res = 0, lastDigit = 0;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    int leastDigit = lastDigit + i;
    res += (lastDigit + 1 + leastDigit) * i / 2;
    lastDigit += i;
  }

  cout << res << endl;

  return 0;
}
