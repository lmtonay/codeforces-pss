#include <bits/stdc++.h>
using namespace std;

int main() {


  string code; cin >> code;

  int ss = code.size();

  for (int i = 0; i < ss; i++) {
    if (code[i] == 'H' || code[i] == 'Q' || code[i] == '9') {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;

  return 0;
}