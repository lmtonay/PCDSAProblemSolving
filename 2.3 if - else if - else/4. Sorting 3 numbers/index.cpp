#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c, t;
  cin >> a >> b >> c;

  if (a > b && a > c)
    a = a;
  else if (b > a && b > c)
  {
    t = a;
    a = b;
    b = t;
  }
  else
  {
    t = c;
    a = c;
    c = t;
  }

  if (b > c)
    b = b;
  else
  {
    t = b;
    b = c;
    c = t;
  }

  cout << c << " " << b << " " << a;

  return 0;
}
