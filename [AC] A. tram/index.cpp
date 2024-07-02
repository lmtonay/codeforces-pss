#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, max = 0, cp = 0; cin >> n;

  while (n) {

    int o, i; cin >> o >> i;

    cp = cp + (i - o);

    if (cp > max) max = cp;

    n--;
  }

  cout << max << endl;

  return 0;
}