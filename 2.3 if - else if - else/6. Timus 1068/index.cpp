#include <bits/stdc++.h>
using namespace std;

int main()
{
  long double n, sum;
  cin >> n;

  if (n == 0)
    sum = 1;

  if (n > 0)
  {
    sum = ((1 + n) / 2) * n;
  }
  if (n < 0) {
    int nAbs = fabs(n);
    long double aSum = ((1 + nAbs) / 2) * nAbs;
    sum = 1 - aSum;
  }

  cout << sum << endl;

  return 0;
}
