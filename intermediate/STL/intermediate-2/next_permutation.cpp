#include <bits/stdc++.h>
using namespace std;

int n, a[12][12], b[12], perm[12], ans = 2000000000;

int main() {
  cin >> n;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      cin >> a[i][j];
    }
  }
  for(int i = 0; i < n; i++) b[i] = i + 1;

  do {
    int sum = 0;
    for(int i = 0; i < n - 1; i++) {
      sum += a[b[i]][b[i + 1]];
    }
    ans = min(ans, sum);
  } while(next_permutation(b, b + n));

  cout << ans << endl;
  return 0;
}
