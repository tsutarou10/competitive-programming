#include <bits/stdc++.h>
using namespace std;

int n, a[10009];

void bubble_sort() {
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n - 1; j++) {
      if(a[j] > a[j + 1]) swap(a[j], a[j + 1]);
    }
  }
}

int main() {

  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i];
  bubble_sort();

  for(int i = 1; i <= n; i++) cout << a[i] << " ";
  cout << endl;
  return 0;
}
