#include <iostream>
using namespace std;

int N, K;

int main(void) {
  cin >> N >> K;

  int ans = 0;
  for(int r = 1; r <= N; r++) {
    for(int b = 1; b <= N; b++) {
      if(1 <= K - r - b && K - r - b <= N) {
        ans+=1;
      }
    }
  }
  cout << ans << endl;
}
