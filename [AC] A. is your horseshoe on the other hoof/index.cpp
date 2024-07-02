#include <bits/stdc++.h>
using namespace std;

int main() {

  set<int> s;

  for (int i = 0; i < 4; i++) {
    int c; cin >> c;
    s.insert(c);
  }

  cout << 4 - s.size() << endl;

  return 0;
}