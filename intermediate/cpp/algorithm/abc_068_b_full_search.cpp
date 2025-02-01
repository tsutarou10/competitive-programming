#include <bits/stdc++.h>
using namespace std;

int count_devide_num(int n) {
  int cnt = 0;
  while(n > 1) {
    if(n % 2 == 1) return cnt;
    n /= 2;
    cnt++;
  }
  return cnt;
}
int main() {
  int N; cin >> N;

  int ans = 1;
  int max_devide_num = 0;
  for(int i = 1; i <= N; i++) {
    if(max_devide_num < count_devide_num(i)) {
      ans = i;
      max_devide_num = count_devide_num(i);
    }
  }
  cout << ans << endl;
  return 0;
}
