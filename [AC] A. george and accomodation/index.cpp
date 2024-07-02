#include <bits/stdc++.h>
using namespace std;

int main() {


  int n, er = 0; cin >> n;

  while (n) {

    int p, q; cin >> p >> q;

    if (p + 2 <= q) er++;

    n--;
  }

  cout << er << endl;

  return 0;
}