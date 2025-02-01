#include <iostream>
using namespace std;

int N, X, A[109];

int main(void) {
  cin >> N >> X;
  for(int i = 1; i <= N; i++) {
    cin >> A[i];
  }
  for(int i = 1; i <= N; i++) {
    if(X == A[i]) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
