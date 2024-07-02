#include <bits/stdc++.h>
using namespace std;

int main() {

  long double n, k; cin >> n >> k;

  long long int ans;

  if (k <= ceil(n / 2)) ans = 2 * k - 1;
  else ans = (k - ceil(n / 2)) * 2;

  cout << ans << endl;

  return 0;
}