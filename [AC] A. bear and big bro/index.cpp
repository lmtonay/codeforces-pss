#include <bits/stdc++.h>
using namespace std;

int main()
{

  int a, b, year = 0; cin >> a >> b;

  while (true) {
    a = a*3;
    b = b*2;

    year++;

    if (a > b) break;
  }

  cout << year;

  return 0;
}