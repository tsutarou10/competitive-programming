#include<iostream>
#include<vector>
using namespace std;

int main(void) {
  int N, Q; cin >> N >> Q;
  vector<int> A(N+1), S(N+1);
  for(int i = 1; i <= N; i++) cin >> A[i];
  S[0] = 0;
  for(int i = 1; i <= N; i++) {
    S[i] = S[i-1] + A[i];
  }

  for(int i = 1; i <= Q; i++) {
    int L, R; cin >> L >> R;
    cout << S[R] - S[L - 1] << endl;
  }
}
