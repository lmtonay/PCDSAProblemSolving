#include <iostream>;
using namespace std;

int main()
{
  int H, L, T;
  cin >> H >> L;
  T = H + L - 2;
  int RH, RL;
  RH = T - H + 1;
  RL = T - L + 1;
  cout << RH << endl;
  cout << RL << endl;
  return 0;
}