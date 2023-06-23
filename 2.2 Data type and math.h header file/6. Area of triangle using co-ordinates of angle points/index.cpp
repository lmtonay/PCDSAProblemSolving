#include <bits/stdc++.h>
using namespace std;

int distance(int ax, int ay, int bx, int by)
{
  int xDist, yDist;
  xDist = fabs(ax - bx);
  yDist = fabs(ay - by);
  double dist = sqrt((xDist * xDist) + (yDist * yDist));
  return dist;
}

int main()
{
  int x1, y1, x2, y2, x3, y3;
  double s1, s2, s3, s, area;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  s1 = distance(x1, y1, x2, y2);
  s2 = distance(x1, y1, x3, y3);
  s3 = distance(x2, y2, x3, y3);
  s = (s1 + s2 + s3) / 2;
  area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
  cout << area << s1 << s2 << s3 << endl;
}
