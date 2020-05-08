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

#define MAX_N 13
#define MAX_M 100
int n, m;
vector<pair<int, int> > v;

void input() {
  cin >> n >> m;
  rep(i, 0, m) {
    int x, y;
    cin >> x >> y;
    v.push_back(make_pair(--x, --y));
  }
}

bool isValid(vector<int> c) {
  rep(i, 0, c.size()) {
    rep(j, i + 1, c.size()) {
      bool flag = false;
      rep(k, 0, m) {
        if(v[k].first == c[i] && v[k].second == c[j]) flag = true;
        if(v[k].second == c[i] && v[k].first == c[j]) flag = true;
      }
      if(!flag) return false;
    }
  }
  return true;
}

void solve() {
  int rsl = 0;
  for(int bit = 0; bit < 1 << n; ++bit) {
    vector<int> candidate;
    rep(i, 0, n) {
      if(bit & (1 << i)) candidate.push_back(i);
    }
    if(isValid(candidate)) rsl = rsl >= candidate.size() ? rsl : candidate.size();
  }
  cout << rsl << endl;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

  input();
  solve();
}
