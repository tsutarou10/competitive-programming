#include <bits/stdc++.h>
using namespace std;

int main() {
  set<int> s1;
  s1.insert(37); // s = {37}
  s1.insert(15); // s = {15, 37}
  s1.insert(37); // s = {15, 37}
  //
  auto itr1 = s1.lower_bound(40);
  if(itr1 == s1.end()) cout << "End" << endl;
  else cout << (*itr1) << endl;
  s1.erase(37); // s = {15}
  s1.insert(46); // s = {15, 46}
  auto itr2 = s1.lower_bound(20);
  if(itr2 == s1.end()) cout << "End" << endl;
  else cout << (*itr2) << endl;

  set<int> s2; int N, a[100009];
  cin >> N;
  for(int i = 1; i <= N; i++) cin >> a[i];
  for(int i = 1; i <= N; i++) s2.insert(a[i]);
  auto itr = s2.begin();
  for(auto itr = s2.begin(); itr != s2.end(); itr++) {
    cout << (*itr) << endl;

  }
  return 0;
}
