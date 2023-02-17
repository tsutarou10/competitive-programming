#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a;
  a.push_back(121); // a = {121}
  a.push_back(105); // a = {121, 105}
  a.push_back(193); // a = {121, 105, 193}
  int x1 = a[1]; // x1 = 105
  a.pop_back(); // a = {121, 105}
  int x2 = a.size(); // x2 = 2
  a.push_back(146); // a = {121, 105, 146}
  int x3 = a[2]; // a = 146
  cout << x1 << " " << x2 << " " << x3 << endl;
  return 0;
}
