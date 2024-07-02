#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t, initial = 0; cin >> t;

  while (t) {

    string operation; cin >> operation;

    if (operation == "X++" || operation == "++X") {
      initial++;
    } else initial--;

    t--;
  }

  cout << initial;

  return 0;
}