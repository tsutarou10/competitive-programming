#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<int> a(N);
  for(int i = 0; i < N; i++) cin >> a[i];
  sort(a.begin(), a.end(), greater<int>());

  int alice = 0, bob = 0;
  for(int i = 0; i < N; i++) {
    if(i % 2 == 0) alice += a[i];
    else bob += a[i];
  }
  int ans = alice - bob;
  cout << ans << endl;
  return 0;
}
