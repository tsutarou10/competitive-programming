#include<iostream>
#include<vector>
using namespace std;

int main(void) {
  int N; cin >> N;
  vector<int> A(N+1), S(N+1);
  S[0] = 0;
  for(int i = 1; i <= N; i++) cin >> A[i];
  for(int i = 1; i <= N; i++) {
    S[i] = S[i-1] + A[i];
  }
  int Q; cin >> Q;
  for(int i = 1; i <= Q; i++) {
    int L, R; cin >> L >> R;
    int atari = S[R] - S[L - 1];
    int total = R - L + 1;
    if(total - 2*atari < 0) cout << "win" << endl;
    else if(total - 2*atari == 0) cout << "draw" << endl;
    else cout << "lose" << endl;
  }
}
