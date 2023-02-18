#include <bits/stdc++.h>
using namespace std;

int N, K, A[59];
int cnt = 0;

int main() {
  cin >> N >> K;
  for(int i = 1; i <= N; i++) cin >> A[i];
  for(int i = 1; i <= N; i++) {
    for(int j = i + 1; j <= N; j++) {
      for(int k = j + 1; k <= N; k++) {
        if(A[i] + A[j] + A[k] == k) cnt += 1;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}
