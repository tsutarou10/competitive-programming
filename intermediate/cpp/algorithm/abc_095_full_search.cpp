#include <bits/stdc++.h>
using namespace std;
int A, B, C, X, Y; 

int calc(int z) {
  int x = X - z / 2 >= 0 ? X - z / 2 : 0;
  int y = Y - z / 2 >= 0 ? Y - z / 2 : 0;
  return A * x + B * y + C * z;
}

int main() {
  cin >> A >> B >> C >> X >> Y;

  int ans = A * X + B * Y;

  for(int z = 0; z <= 2e5; z+= 2){
    int tmp = calc(z);
    if(tmp < 0) continue;
    ans = min(ans, tmp);
  }

  cout << ans << endl;

  return 0;
}
