#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> x(110), y(110), h(110);

bool sub_func_when_h0_is_zero(int cx, int cy) {
  int max_height = abs(x[0] - cx) + abs(y[0] - cy);
  for(int height = 1; height <= max_height; height++) {
    bool is_valid = true;
    for(int i = 1; i < N; i++) {
      if(h[i] != max(height - abs(x[i] - cx) - abs(y[i] - cy), 0)) {
        is_valid = false;
        break;
      }
    }
    if(is_valid) {
      cout << cx << " " << cy << " " << height << endl;
      return true;
    }
  }
  return false;
}

bool sub_func_when_h0_is_not_zero(int cx, int cy) {
  int height = abs(x[0] - cx) + abs(y[0] - cy) + h[0];
  bool is_valid = true;
  for(int i = 1; i < N; i++) {
    if(h[i] != max(height - abs(x[i] - cx) - abs(y[i] - cy), 0)) {
      is_valid = false;
      break;
    }
  }
  if(is_valid) {
    cout << cx << " " << cy << " " << height << endl;
    return true;
  }
  return false;
}

int main() {
  cin >> N;
  for(int i = 0; i < N; i++) cin >> x[i] >> y[i] >> h[i];

  for(int cx = 0; cx <= 100; cx++) {
    for(int cy = 0; cy <= 100; cy++) {
      bool is_succeed = h[0] == 0 ? sub_func_when_h0_is_zero(cx, cy) : sub_func_when_h0_is_not_zero(cx, cy);
    }
  }

  return 0;
}
