#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <cstring>
#include <iomanip>

using namespace std;
// ascending order
#define vsort(v) sort(v.begin(), v.end())
// descending order
#define vsort_r(v) sort(v.begin(), v.end(), greater<int>())
#define vunique(v) v.erase(unique(v.begin(), v.end()), v.end())
#define mp make_pair
#define ts(x) to_string(x)
#define rep(i, a, b) for(int i = (int)a; i < (int)b; i++)
#define repm(i, a, b) for(int i = (int)a; i > (int)b; i--)
#define bit(a) bitset<8>(a)
#define des_priority_queue priority_queue<int, vector<int>, greater<int> >
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
typedef long long ll;
typedef pair<int, int> P;
const ll INF = 1e18;

#define MAX_V 1000000

vector<int> divisor(int n) {
	vector<int> res;
	for(int i = 1; i * i <= n; i++) {
		if(n % i == 0) {
			res.push_back(i);
			if(i != n / i) res.push_back(n / i);
		}
	}
	return res;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

  int n;
  cin >> n;
  int rsl = 0;
  rep(i, 1, n + 1) {
    if(i % 2) {
      vector<int> tmp = divisor(i);
      if(tmp.size() == 8) ++rsl;
    }
  }
  cout << rsl << endl;
}
