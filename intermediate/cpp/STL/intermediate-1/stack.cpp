#include <bits/stdc++.h>
using namespace std;

int main() {
  stack<int> st;
  st.push(179); // st = {179}
  st.push(173); // st = {179, 173} (下から順に要素が積まれている)
  st.push(156); // st = {179, 173, 156}
  int x1 = st.top(); // x1 = 156
  st.pop(); // st = {179, 173}
  st.push(117); // st = {179, 173, 117}
  st.push(202); // st = {179, 173, 117, 202}
  int x2 = st.top(); // x2 = 202
  st.pop(); // st = {179, 173, 117}
  int x3 = st.top(); // x3 = 117
  int x4 = st.size(); // x4 = 3
  int x5 = st.empty() ? 0 : 10000; // 空の時は 0, それ以外は 10000、今回は 10000
  cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << endl;

  return 0;
}
