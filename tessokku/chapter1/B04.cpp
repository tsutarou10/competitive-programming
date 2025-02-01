#include <iostream>
using namespace std;


int main(void) {
  string N;
  cin >> N;

  int ans = 0;
  for(int x = 0; x < N.size(); x++) {
    if(N[x] == '1') {
      ans += (1 << (N.size() - x - 1));
    }
  }
  cout << ans << endl;
}
