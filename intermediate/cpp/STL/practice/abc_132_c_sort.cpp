#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<int> d(N);
  for(int i = 0; i < N; i++) cin >> d[i];
  sort(d.begin(), d.end());

  int min_of_arc = d[N/2];
  int max_of_abc = d[N/2 - 1];
  cout << min_of_arc - max_of_abc << endl;
  return 0;
}
