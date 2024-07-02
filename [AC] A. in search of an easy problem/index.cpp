#include <bits/stdc++.h>
using namespace std;

int main() {

  int n; cin >> n;

  string dif = "EASY";

  while (n) {
    int op; cin >> op;

    if (op == 1) dif = "HARD";

    n--;
  }

  cout << dif << endl;

  return 0;
}