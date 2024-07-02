#include <bits/stdc++.h>
using namespace std;

int main() {

  unsigned long long int n; int lnc = 0; cin >> n;

  string ns = to_string(n);

  int dc = ns.size();

  for (int i = 0; i < dc; i++) {
    if (ns[i] == '4' || ns[i] == '7') {
      lnc++;
    }
  }

  if (lnc == 4 || lnc == 7) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}