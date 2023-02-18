#include <bits/stdc++.h>
using namespace std;

bool solve(int n) {
  int cnt = 0;
  while(n > 0) {
    n /= 10;
    cnt++;
  }
  return cnt % 2 == 1;
}
int main() {
  int N; cin >> N;

  int ans = 0;
  for(int i = 1; i <= N; i++) {
    if(solve(i)) ans++;
  }
  cout << ans << endl;

  return 0;
}
