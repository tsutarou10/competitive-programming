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
#define MAX_N 11
#define MAX_M 11

int n, m;
int k[MAX_N];
int s[MAX_M][MAX_N];
int p[MAX_M];

bool isValid(vector<int> v) {
  rep(i, 0, m) {
    int tmp = 0;
    rep(_v, 0, v.size()) {
      rep(j, 0, k[i]) if(v[_v] == s[i][j] - 1) ++tmp;
    }
    if(tmp % 2 != p[i]) return false;
  }
  return true;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

  cin >> n >> m;
  rep(i, 0, m) {
    cin >> k[i];
    rep(j, 0, k[i]) cin >> s[i][j];
  }
  rep(i, 0, m) cin >> p[i];

  int rsl = 0;
  for(int bit = 0; bit < 1 << n; ++bit) {
    vector<int> v;
    rep(i, 0, n) {
      if(bit & 1 << i) {
        v.push_back(i);
      }
    }
    if (isValid(v)) ++rsl;
  }
  cout << rsl << endl;
}
