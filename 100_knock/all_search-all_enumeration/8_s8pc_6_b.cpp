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
#define MAX_N 40

int n;
ll a[MAX_N], b[MAX_N], s, g;

ll cal(ll x, ll y) {
  return abs(s - x) + abs(x - y) + abs(y - g);
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

  cin >> n;
  ll rsl = 1e18;
  rep(i, 0, n) cin >> a[i] >> b[i];
  rep(i, 0, n) {
    rep(j, 0, n) {
      s = a[i], g = b[j];
      ll tmp = 0;
      rep(k, 0, n) tmp += cal(a[k], b[k]);
      chmin(rsl, tmp);
    }
  }
  cout << rsl << endl;
}
