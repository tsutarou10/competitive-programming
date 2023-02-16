#include <bits/stdc++.h>
using namespace std;

int main() {
  srand((unsigned)time(NULL));

  // 1 以上 6 以下の乱数生成
  cout << rand() % 6 + 1 << endl;

  string result = rand() % 10 <= 8 ? "Yay!" : ":(";
  cout << result << endl;

  return 0;
}
