#include <bits/stdc++.h>
using namespace std;

int main() {


  int n, g = 1; cin >> n;
  char lt;

  while (n) {


    string m; cin >> m;

    if (m[0] == lt) g++;

    lt = m[1];

    n--;
  }

  cout << g << endl;

  return 0;

}