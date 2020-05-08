#include <ios>
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

#define MAX_R 11
#define MAX_C 10010
int r, c;
int board[MAX_R][MAX_C];
int tmpBoard[MAX_R][MAX_C];
int cntR[MAX_C];
int tmpCntR[MAX_C];

void input() {
  cin >> r >> c;
  rep(i, 0, r) rep(j, 0, c) cin >> board[i][j];
  rep(i, 0, r) rep(j, 0, c) {
    if(board[i][j] == 0) {
      ++cntR[j];
    }
  }
}

void init() {
  rep(i, 0, c) tmpCntR[i] = cntR[i];
  rep(i, 0, r) rep(j, 0, c) tmpBoard[i][j] = board[i][j];
}

int countHead() {
  int rsl = 0;
  rep(i, 0, c) rsl += max(tmpCntR[i], r - tmpCntR[i]);
  return rsl;
}

void reverse(int idx) {
  rep(j, 0, c) {
    int diff = (tmpBoard[idx][j] == 1) ? 1 : -1;
    tmpCntR[j] += diff;
    tmpBoard[idx][j] = (tmpBoard[idx][j] == 1) ? 0 : 1;
  }
}

void solve() {
  int rsl = 0;
  rep(i, 0, r) rep(j, 0, c) if(board[i][j] == 0) ++rsl;
  for(int bit = 0; bit < 1 << r; ++bit) {
    init();
    rep(i, 0, r) {
      if(bit & (1 << i)) {
        reverse(i);
      }
    }
    rsl = rsl >= countHead() ? rsl : countHead();
  }
  cout << rsl << endl;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
  input();
  solve();
}
