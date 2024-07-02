#include <bits/stdc++.h>
using namespace std;

int main() {

  string n1, n2, ns = ""; cin >> n1 >> n2;

  int lons = n1.size();

  for (int i = 0; i < lons; i++) {
    if (n1[i] == n2[i]) ns = ns + '0';
    else ns = ns + '1';
  }

  cout << ns << endl;

  return 0;
}