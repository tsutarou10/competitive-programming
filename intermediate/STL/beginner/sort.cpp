#include <bits/stdc++.h>
using namespace std;

void print(int* arr, int N) {
  for(int i = 0; i < 8; i++) cout << arr[i] << " ";
  cout << endl;
}

int main() {
  int a[8] = {8, 3, 7, 1, 4, 6, 2, 5};
  int b[8] = {8, 3, 7, 1, 4, 6, 2, 5};
  int c[8] = {8, 3, 7, 1, 4, 6, 2, 5};

  sort(a, a + 8); // 全体をソート
  print(a, 8);

  sort(b + 1, b + 5); // b[1] ~ b[4] 番目をソート
  print(b, 8);

  sort(c, c + 8, greater< int >()); // 大きい順にソート
  print(c, 8);
    
  return 0;
}
