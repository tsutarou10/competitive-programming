#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, A[100009], B[100009];
  vector<int> G[100009];

  cin >> N >> M;
  for(int i = 1; i <= M; i++) cin >> A[i] >> B[i];

  for(int i = 1; i <= M; i++) {
    G[A[i]].push_back(B[i]);
    G[B[i]].push_back(A[i]);
  }

  for(int i = 1; i <= N; i++) {
    cout << "Vertex #" << i << ": {";
    for(int j = 0; j < G[i].size(); j++) {
      if(j >= 1) cout << " ";
      cout << G[i][j];
    }
    cout << "}" << endl;
  }
  return 0;
}
