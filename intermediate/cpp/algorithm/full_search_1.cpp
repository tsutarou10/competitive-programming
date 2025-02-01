#include <bits/stdc++.h>
using namespace std;

bool solve(int n) {
  int cnt = 0;
  for(int i = 1; i <= n; i++) {
    if(n % i == 0) cnt++;
  }
  return (cnt == 8 && n % 2 == 1);
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
