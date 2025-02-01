#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, a[100009];
  cin >> N;
  for (int i = 0; i < N; i++) cin >> a[i];
  sort(a, a + N);

  int x;
  cin >> x;
  cout << lower_bound(a, a + N, x) - a << endl;
  return 0;
}
