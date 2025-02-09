#include<iostream>
#include<vector>
using namespace std;

int A[1510][1510], Z[1510][1510];

int main(void) {
  int N; cin >> N;
  for(int i = 0; i < 1510; i++) for(int j = 0; j < 1510; j++) {
    A[i][j] = 0;
    Z[i][j] = 0;
  }

  for(int i = 0; i < N; i++) {
    int X, Y; cin >> X >> Y;
    A[Y][X] += 1;
  }

  // 横方向の累積和を求める
  for(int y = 1; y < 1510; y++) {
    for(int x = 1; x < 1510; x++) {
      Z[y][x] = Z[y][x - 1] + A[y][x];
    }
  }

  // 縦方向の累積和を求める
  for(int y = 1; y < 1510; y++) {
    for(int x = 1; x < 1510; x++) {
      Z[y][x] += Z[y - 1][x];
    }
  }

  int Q; cin >> Q;
  for(int q = 0; q < Q; q++) {
    int a, b, c, d; cin >> a >> b >> c >> d;
    int ans = Z[d][c] + Z[b - 1][a - 1] - Z[d][a - 1] - Z[b - 1][c];
    cout << ans << endl;
  }
}
