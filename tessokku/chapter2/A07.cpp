#include<iostream>
#include<vector>
using namespace std;

int main(void) {
  int D, N; cin >> D >> N;
  vector<int> A(D+1);
  for(int i = 1; i <= N; i++) {
    int L, R; cin >> L >> R;
    A[L]+= 1;
    A[R+1]-=1;
  }
  vector<int> S(D+1);
  S[0] = 0;
  for(int i = 1; i<=D; i++){
    S[i] = S[i-1] + A[i];
  }
  for(int i = 1; i <= D; i++) cout << S[i] << endl;
}
