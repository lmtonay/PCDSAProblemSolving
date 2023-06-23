#include <bits/stdc++.h>
using namespace std;

int main() {
  double s1, s2, s3, s, area;
  cout << "Input the length of three sides either in three separate lines or like this: 3 4 6.6 (spaced)" << endl;
  cin >> s1 >> s2 >> s3;
  s = (s1 + s2 + s3) / 2;
  area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
  cout << "The area of the triangle is: " << area << " square units";
  return 0;
}
