// https://drken1215.hatenablog.com/entry/2019/12/14/171657
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, W;
  cin >> N >> W;
  vector<int> a(N);
  for(int i = 0; i< N; ++i) cin >> a[i];

  bool exist = false;
  for(int bit = 0; bit < (1 << N); ++bit) {
    int sum = 0;
    for(int i = 0; i < N;++i) {
      if(bit&(1<<i)) sum += a[i];
    }
    if(sum == W) exist = true;
  }
  if(exist) cout << "Yes" << endl;
  else cout << "No" << endl;
}
