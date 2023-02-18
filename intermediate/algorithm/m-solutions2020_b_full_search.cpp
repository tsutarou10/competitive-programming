#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C; cin >> A >> B >> C;
  int K; cin >> K;

  for(int a = 0; a <= K; a++) {
    for(int b = 0; b <= K; b++) {
      for(int c = 0; c <= K; c++) {
        if(a + b + c > K) continue;
        long long new_a = a != 0 ? pow(2, a) * A : A;
        long long new_b = b != 0 ? pow(2, b) * B : B;
        long long new_c = c != 0 ? pow(2, c) * C : C;
        if(new_a < new_b && new_b < new_c) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }

  cout << "No" << endl;
  return 0;
}
