#include <iostream>
using namespace std;

int X[1510][1510], Z[1510][1510];

int main(void) {
  int H, W, N;
  cin >> H >> W >> N;

  for(int h = 1; h <= H; h++) for(int w = 0; w < 1510; w++) {
    X[h][w] = 0;
    Z[h][w] = 0;
  }

  for(int n = 1; n <= N; n++) {
    int A, B, C, D; cin >> A >> B >> C >> D;
    X[A][B] += 1;
    X[A][D + 1] -= 1;
    X[C + 1][B] -= 1;
    X[C + 1][D + 1] += 1;
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

  for(int h = 1; h <= H; h++) {
    for(int w = 1; w <= W; w++) {
      cout << Z[h][w];
      if(w != W) cout << " ";
    }
    cout << endl;
  }

}
