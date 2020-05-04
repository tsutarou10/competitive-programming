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

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

  int m, n;
  cin >> m;
  pair<int, int> p1[m];
  rep(i, 0, m) {
    int x, y;
    cin >> x >> y;
    p1[i] = make_pair(x, y);
  }
  cin >> n;
  pair<int, int> p2[n];
  rep(i, 0, n) {
    int x, y;
    cin >> x >> y;
    p2[i] = make_pair(x, y);
  }
  set<pair<int, int> > diff;
  rep(i, 0, m) {
    diff.insert(make_pair(p1[0].first - p1[i].first, p1[0].second - p1[i].second));
  }

  rep(i, 0, n) {
    int rsl = 0;
    rep(j, 0, n) {
      pair<int, int> tmp = make_pair(p2[i].first - p2[j].first, p2[i].second - p2[j].second);
      if(diff.find(tmp) != diff.end()) ++rsl;
    }
    if(rsl == m) {
      int rslX = p2[i].first - p1[0].first;
      int rslY = p2[i].second - p1[0].second;
      cout << rslX << " " << rslY << endl;
      return 0;
    }
  }
}
