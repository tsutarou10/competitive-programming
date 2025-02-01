#include <iostream>
using namespace std;

int A, B;
int main(void) {
  cin >> A >> B;
  for(int i = A; i <= B; i++) {
    if(100 % i == 0) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
