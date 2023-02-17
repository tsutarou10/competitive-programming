#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, int> m;
  m["qiita"] = 777;
  m["algorithm"] = 1111;
  m["competitive_programming"] = 108201983;

  cout << m["algorithm"] << endl;
  cout << m["tourist"] << endl; // 書き込まれていないから 0 が出力される
    
  return 0;
}
