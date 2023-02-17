#include <bits/stdc++.h>
using namespace std;

int main() {
  queue<int> q;
  q.push(179); // q = {179}
  q.push(173); // q = {179, 173}
  q.push(156); // q = {179, 173, 156}
  int x1 = q.front(); // x1 = 179
  q.pop(); // q = {173, 156}
  q.push(117); // q = {173, 156, 117}
  q.push(202); // q = {173, 156, 117, 202}
  int x2 = q.front(); // x2 = 173;
  q.pop(); // q = {156, 117, 202}
  int x3 = q.front(); // x3 = 156
  int x4 = q.size(); // x4 = 3
  int x5 = q.empty() ? 0 : 10000; // x5 = 10000

  cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << endl;
  return 0;
}
