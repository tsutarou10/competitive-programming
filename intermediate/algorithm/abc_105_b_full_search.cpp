#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  int cake_price = 4, donuts_price = 7;

  int max_cake_num = N / cake_price;
  int max_donuts_num = N / donuts_price;
  for(int i = 0; i <= max_cake_num; i++) {
    for(int j = 0; j <= max_donuts_num; j++) {
      int total_price = cake_price * i + donuts_price * j;
      if(total_price == N) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
