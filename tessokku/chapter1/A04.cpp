#include <iostream>
using namespace std;

int N;

int main(void) {
  cin >> N;
  for(int x = 9; x >= 0; x--) {
    cout << (N / (1 << x)) % 2;
  }
  cout << endl;
}
