#include <iostream>
using namespace std;

int N, A[109];

int main(void) {
  cin >> N;
  for(int i = 1; i <= N; i++) cin >> A[i];

  for(int i = 1; i <= N; i++) {
    for(int j = i + 1; j <= N; j++) {
      for(int k = j + 1; k <= N; k++) {
        if(A[i] + A[j] + A[k] == 1000) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
}
