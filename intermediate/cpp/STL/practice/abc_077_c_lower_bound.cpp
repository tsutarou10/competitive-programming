#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<int> A(N), B(N), C(N);
  for(int i = 0; i < N; i++) {
    int x; cin >> x;
    A[i] = -1 * x;
  }
  for(int i = 0; i < N; i++) cin >> B[i];
  for(int i = 0; i < N; i++) cin >> C[i];

  sort(A.begin(), A.end());
  sort(C.begin(), C.end());

  long long ans = 0;
  for(int i = 0; i < N; i++) {
    auto iter_a = upper_bound(A.begin(), A.end(), -1 * B[i]);
    auto iter_c = upper_bound(C.begin(), C.end(), B[i]);

    ans += (A.end() - iter_a) * (C.end() - iter_c);
  }
  cout << ans << endl;
  return 0;
}
