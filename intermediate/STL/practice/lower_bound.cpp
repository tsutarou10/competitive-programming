#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, L, R, A[1000009];
  cin >> N >> L >> R;
  for(int i = 1; i <= N; i++) cin >> A[i];
  sort(A + 1, A + N + 1);

  long long ans = 0;
  for(int i = 1; i <= N; i++) {
    int left_j = lower_bound(A + 1, A + N + 1, L - A[i]) - A;
    int right_j = lower_bound(A + 1, A + N + 1, (R + 1LL) - A[i]) - A;
    ans += 1LL * (right_j - left_j);
  }
  cout << ans << endl;
  return 0;
}
