#include <bits/stdc++.h>
using namespace std;

vector<long long> divisor(long long n) {
	vector<long long> res;
	for(long long i = 1; i * i <= n; i++) {
		if(n % i == 0) {
			res.push_back(i);
			if(i != n / i) res.push_back(n / i);
		}
	}
	return res;
}

int main() {
  vector<long long> v = divisor(9);
  for(auto itr = v.begin(); itr != v.end(); itr++) {
    cout << *itr << endl;
  }
  return 0;
}
