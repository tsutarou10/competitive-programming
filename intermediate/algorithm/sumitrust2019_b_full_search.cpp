#include <bits/stdc++.h>
using namespace std;

double tax = 1.08;

int main() {
  int N; cin >> N;

  for(int X = 0; X <= N; X++) {
    int paid_money = X * tax;
    if(paid_money == N) {
      cout << X << endl;
      return 0;
    }
  }
  cout << ":(" << endl;

  return 0;
}
