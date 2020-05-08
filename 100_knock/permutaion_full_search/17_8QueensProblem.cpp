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

void print_setprecision(int i, long double rsl) {
  cout << fixed << setprecision(i) << rsl << endl;
}

int k;
bool board[8][8];
bool copyBoard[8][8];

bool verticalCheck(int x, int y) {
  rep(i, 0, 8) {
    if(i == y) continue;
    if(board[x][i]) return false;
  }
  return true;
}

bool horizontalCheck(int x, int y) {
  rep(i, 0, 8) {
    if(i == x) continue;
    if(board[i][y]) return false;
  }
  return true;
}

bool rightDiagonalCheck(int x,int y) {
  rep(i, 1, 8) {
    if(!(0 <= x + i && x + i < 8)) continue;
    if(!(0 <= y - i && y - i < 8)) continue;
    if(board[x + i][y - i]) return false;
  }
  rep(i, 1, 8) {
    if(!(0 <= x - i && x - i < 8)) continue;
    if(!(0 <= y + i && y + i < 8)) continue;
    if(board[x - i][y + i]) return false;
  }
  return true;
}

bool leftDiagonalCheck(int x,int y) {
  rep(i, 1, 8) {
    if(!(0 <= x + i && x + i < 8)) continue;
    if(!(0 <= y + i && y + i < 8)) continue;
    if(board[x + i][y + i]) return false;
  }
  rep(i, 1, 8) {
    if(!(0 <= x - i && x - i < 8)) continue;
    if(!(0 <= y - i && y - i < 8)) continue;
    if(board[x - i][y - i]) return false;
  }
  return true;
}

bool check() {
  rep(i, 0, 8) {
    rep(j, 0, 8) {
      if(board[i][j]) {
        if(!verticalCheck(i, j)) return false;
        if(!horizontalCheck(i, j)) return false;
        if(!rightDiagonalCheck(i, j)) return false;
        if(!leftDiagonalCheck(i, j)) return false;
      }
    }
  }
  return true;
}

void init() {
  rep(i, 0, 8) rep(j, 0, 8) board[i][j] = copyBoard[i][j];
}

void input() {
  cin >> k;
  rep(i, 0, 8) rep(j, 0, 8) {
    board[i][j] = false;
    copyBoard[i][j] = false;
  }
  rep(i, 0, k) {
    int r, c;
    cin >> r >> c;
    board[r][c] = true;
    copyBoard[r][c] = true;
  }
}

void print() {
  rep(i, 0, 8) {
    rep(j, 0, 8) {
      if(board[i][j]) cout << "Q";
      else cout << ".";
    }
    cout << endl;
  }
}
void solve() {
  int arr[8];
  rep(i, 0, 8) arr[i] = i;
  do {
    init();
    rep(i, 0, 8) {
      board[i][arr[i]] = true;
    }
    if(check()) {
      print();
    }
  } while(next_permutation(arr, arr + 8));
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  input();
  solve();
}
