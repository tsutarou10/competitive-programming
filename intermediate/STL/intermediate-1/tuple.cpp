#include <bits/stdc++.h>
using namespace std;

int main() {
  tuple<int, int, int> t1;
  cin >> get<0>(t1) >> get<1>(t1) >> get<2>(t1);
  cout << get<0>(t1) + get<1>(t1) + get<2>(t1) << endl;

  vector<tuple<double, int, int>> vt; int N;
  cin >> N;
  for(int i = 1; i <= N; i++) {
    double p1; int p2, p3;
    cin >> p1 >> p2 >> p3;
    vt.push_back(make_tuple(p1, p2, p3));
  }
  sort(vt.begin(), vt.end());
  for(int i = 0; i < N; i++) {
    printf("%.5lf %d %d\n", get<0>(vt[i]), get<1>(vt[i]), get<2>(vt[i]));
  }
  return 0;
}
