#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M; cin >> N >> M;
  if(N == 1 && M == 0) {
    cout << 0 << endl;
    return 0;
  }
  vector<int> s(M), c(M);
  for(int i = 0; i < M; i++) cin >> s[i] >> c[i];

  vector<int> ans_v(N, -1);
  for(int i = 0; i < M; i++) {
    int cur_digit = s[i];
    if(ans_v[cur_digit - 1] != -1 && ans_v[cur_digit - 1] != c[i]) {
      cout << -1 << endl;
      return 0;
    }
    ans_v[cur_digit - 1] = c[i];
  }

  if(N != 1 && ans_v[0] == 0) {
    cout << -1 << endl;
    return 0;
  }

  int ans = ans_v[0] == -1 ? pow(10, N - 1) : ans_v[0] * pow(10, N - 1);
  for(int i = 1; i < N; i++) {
    if(ans_v[i] == -1) continue;
    ans += ans_v[i] * pow(10, N - i - 1);
  }
  cout << ans << endl;

  return 0;
}
