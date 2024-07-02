#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n, r = 0; string s; cin >> n >> s;

  char prev;

  for (int i = 1; i <= n; i++) {
    if (prev == s[i - 1]) r++;

    prev = s[i - 1];
  }

  cout << r << endl;

  return 0;
}