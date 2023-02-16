#include <bits/stdc++.h>
using namespace std;

int main() {
  int start_time = clock();
  for(int i = 1; i <= 10000; i++) cout << i << endl;
  printf("Execution Time: %.4lf sec\n", 1.0 * (clock() - start_time) / CLOCKS_PER_SEC);

  return 0;
}
