#include <bits/stdc++.h>
using namespace std;

int main() {
  string a; cin >> a;
  string b; cin >> b;

  bitset<2000> bs1(a);
  bitset<2000> bs2(b);
  bitset<2000> ans = (bs1 | bs2);

  bool flag = false;
  for(int i = 1999; i >= 0; i--) {
    if(ans[i] == 1) flag = true;
    if(flag) cout << ans[i];
  }
  cout << endl;
  return 0;
}
