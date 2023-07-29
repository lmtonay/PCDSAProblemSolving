#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x, y;
  cin >> x >> y;

  if (x > 0 && y > 0)
  {
    cout << "First quadrant" << endl;
  }
  else if (x > 0 && y < 0)
  {
    cout << "Fourth quadrant" << endl;
  }
  else if (x < 0 && y > 0)
  {
    cout << "Second quadrant" << endl;
  }
  else if (x < 0 && y < 0)
  {
    cout << "Third quadrant" << endl;
  }
  else
  {
    cout << "The co-ordinates are on abscissa or ordinate";
  }

  return 0;
}
