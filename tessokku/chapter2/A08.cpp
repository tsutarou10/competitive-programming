#include<iostream>
#include<vector>
using namespace std;

int main(void) {
  int H, W; cin >> H >> W;
  int X[H+1][W+1], Z[H+1][W+1];

  for(int h = 1; h <= H; h++) {
    for(int w = 1; w <= W; w++) {
      cin >> X[h][w];
    }
  }

  for(int h = 0; h <= H; h++) {
    for(int w = 0; w <= W; w++) {
      Z[h][w] = 0;
    }
  }

  // 横方向の累積和を求める
  for(int h = 1; h <= H; h++) {
    for(int w = 1; w <= W; w++) {
      Z[h][w] = Z[h][w - 1] + X[h][w];
    }
  }
  // 縦方向の累積和を求める
  for(int h = 1; h <= H; h++) {
    for(int w = 1; w <= W; w++) {
      Z[h][w] += Z[h - 1][w];
    }
  }

  int Q; cin >> Q;
  for(int q = 1; q <= Q; q++) {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int ans = Z[C][D] + Z[A - 1][B - 1] - Z[A - 1][D] - Z[C][B - 1];
    cout << ans << endl;
  }
}
