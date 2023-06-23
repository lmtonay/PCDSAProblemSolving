#include <bits/stdc++.h>
using namespace std;

int main () {
  int ax, ay, bx, by, xDist, yDist;
  cin >> ax >> ay >> bx >> by;
  xDist = abs(ax - bx);
  yDist = abs(ay - by);
  double dist = sqrt((xDist * xDist) + (yDist * yDist));
  cout << dist << endl;
  return 0;
}
