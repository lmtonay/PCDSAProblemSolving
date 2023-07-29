#include <bits/stdc++.h>
using namespace std;

bool isPalindrome (int n) {
  string nS = to_string(n);
  string rS = nS;
  for (int i = nS.length(); i; i--) {
    rS[i - 1] = nS[nS.length() - i];
  }
  return (nS == rS);
}

int main()
{
  int n, i = 1, c = 0;
  cin >> n;

  while (true) {
    if (isPalindrome(i)) c++;
    if (c == n) break;
    i++;
  }

  cout << i << endl;

  return 0;
}
