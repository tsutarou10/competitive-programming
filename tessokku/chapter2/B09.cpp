#include <iostream>
using namespace std;

int Z[1509][1509];

int main(void) {
  for(int y = 0; y < 1509; y++) for(int x = 0; x < 1509; x++) {
    Z[y][x] = 0;
  }

  int N; cin >> N;

  for(int n = 1; n <= N; n++) {
    int A, B, C, D; cin >> A >> B >> C >> D;
    Z[B][A] += 1;
    Z[D][A] -= 1;
    Z[B][C] -= 1;
    Z[D][C] += 1;
  }

  // 横方向の累積和を求める
  for(int y = 0; y < 1509; y++) {
    for(int x = 1; x < 1509; x++) {
      Z[y][x] += Z[y][x - 1];
    }
  }

  // 縦方向の累積和を求める
  for(int y = 1; y < 1509; y++) {
    for(int x = 0; x < 1509; x++) {
      Z[y][x] += Z[y - 1][x];
    }
  }

  int ans = 0;
  for(int y = 0; y < 1509; y++) {
    for(int x = 0; x < 1509; x++) {
      if(Z[y][x] >= 1) ans += 1;
    }
  }

  cout << ans << endl;
}
