#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, ans = 10;
  cin >> a >> b;
  cout << min(abs(a - b), 10 - abs(a - b)) << endl;
}