#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q, a[1009];
  cin >> N;
  for(int i = 1; i <= N; i++) cin >> a[i];
  cin >> Q;
  for(int i = 1; i <= Q; i++) {
    int l, r, x;
    cin >> l >> r >> x;
    int f = find(a + l, a + r + 1, x) - a;
    if(f == r + 1) cout << "Not Found..." << endl;
    else cout << f << endl;
  }
  return 0;
}
