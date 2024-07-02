#include <bits/stdc++.h>
using namespace std;

int main () {

  int n; cin >> n;

  int output[n];

  for (int i = 0; i < n; i++) {

    int p; cin >> p;

    output[p - 1] = i + 1;

  }

  for (int i = 0; i < n; i++) {
    cout << output[i] << " ";
  }

  return 0;
}