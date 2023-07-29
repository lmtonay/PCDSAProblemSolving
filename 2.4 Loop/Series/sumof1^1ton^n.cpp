#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n, res = 0, lastDigit;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    res += pow(i, i);
  }

  cout << res << endl;

  return 0;
}
