#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x, y, res;

  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      int inp; cin >> inp;
      if (inp == 1) {
        x = i;
        y = j;
      }
    }
  }

  res = abs(x - 3) + abs(y - 3);

  cout << res;

  return 0;
}