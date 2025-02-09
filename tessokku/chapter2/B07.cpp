#include<iostream>
#include<vector>
using namespace std;

int main(void) {
  int T, N; cin >> T >> N;

  vector<int> Answer(T+1), B(T+1), L(N+1), R(N+1);

  for(int i = 1; i <= N; i++) cin >> L[i] >> R[i];

  for(int i = 1; i <= N; i++) {
    B[L[i]] += 1;
    B[R[i]] -= 1;
  }

  Answer[0] = B[0];
  for(int i = 1; i <= T; i++) Answer[i] = Answer[i - 1] + B[i];
  for(int i = 0; i < T; i++) cout << Answer[i] << endl;
}
