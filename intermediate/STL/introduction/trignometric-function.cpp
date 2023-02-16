#include <bits/stdc++.h>
using namespace std;

void printResult(double result) {
  printf("%.12lf\n", result);
}

int main() {
  // ex1. 三角関数は弧度法を使う
  printResult(sin(30));

  double pi = 3.141592653589793238;
  double x;
  cin >> x;
  printResult(sin(x/180.0 * pi));
  printResult(cos(x/180.0 * pi));
  printResult(tan(x/180.0 * pi));
  return 0;
}
