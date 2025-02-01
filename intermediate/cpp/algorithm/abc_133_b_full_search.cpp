#include <bits/stdc++.h>
using namespace std;

bool is_dis_int(vector<int> y, vector<int> z) {
  int dis_2 = 0;
  for(int i = 0; i < y.size(); i++) {
    dis_2 += pow(y[i] - z[i], 2);
  }
  int sqr_dis = sqrt(dis_2);
  return pow(sqr_dis, 2) == dis_2;
}

int main() {
  int N, D; cin >> N >> D;
  vector<vector<int>> X(N, vector<int>(D));
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < D; j++) {
      cin >> X[i][j];
    }
  }
  int ans = 0;
  for(int i = 0; i < N; i++) {
    for(int j = i + 1; j < N; j++) {
      if(is_dis_int(X[i], X[j])) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
