#include <bits/stdc++.h>
using namespace std;

int main() {
  priority_queue<int, vector<int>, greater<int>> pq;
  pq.push(116); // pq = {116}
  pq.push(145); // pq = {116, 145}
  pq.push(122); // pq = {116, 122, 145}
  int x1 = pq.top(); // x1 = 116
  pq.push(110); // pq = {110, 116, 122, 145}
  int x2 = pq.top(); // x2 = 110
  pq.pop(); // pq = {116, 122, 145}
  pq.pop(); // pq = {122, 145}
  int x3 = pq.top(); // x3 = 122
  int x4 = pq.size(); // x4 = 2
  int x5 = pq.empty() ? 0 : 10000; // x5 = 10000

  cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << endl;

  return 0;
}
