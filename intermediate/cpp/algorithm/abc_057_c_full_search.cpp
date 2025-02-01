#include <bits/stdc++.h>
using namespace std;

long long N;

int calc_digit_num(long long x) {
  return to_string(x).length();
}

int main() {
  cin >> N;

  int ans = 10;
  for(long long a = 1; a * a <= N; a++) {
    if(N % a != 0) continue;
    long long b = a;
    if(a * a != N) {
      b = N / a;
    }
    int digit_num_of_a = calc_digit_num(a);
    int digit_num_of_b = calc_digit_num(b);
    ans = min(ans, max(digit_num_of_a, digit_num_of_b));
  }
  cout << ans << endl;
  return 0;
}
