#include <bits/stdc++.h>
using namespace std;

int main() {
  double A, B, C, D;
  cin >> A >> B >> C >> D;
  if (B / A > D / C) {
    cout << "TAKAHASHI" << endl;
  } else if (B / A == D / C) {
    cout << "DRAW" << endl;
  } else {
    cout << "AOKI" << endl;
  }
}