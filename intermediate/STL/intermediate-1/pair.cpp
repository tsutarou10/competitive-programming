#include <bits/stdc++.h>
using namespace std;

int N;
pair<int, string> a[10009];

int main() {
  cin >> N;
  for(int i = 0; i < N; i++) {
     cin >> a[i].second;
     cin >> a[i].first;
  }
  sort(a, a + N, greater<pair<int, string>>());
  for(int i = 0; i < N; i++) {
    cout << "Name = " << a[i].second << ", Score = " << a[i].first << endl;
  }
  return 0;
}
