#include <bits/stdc++.h>
using namespace std;

int N, X, cnt, a[10009];

int main() {
  cin >> N >> X;
  assert(N <= 10000);
  for(int i = 1; i <= N; i++) cin >> a[i];

  for(int i = 1; i <= N; i++) {
    for(int j = 1; j <= N; j++) {
      if(a[i] + a[j] == X) cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
