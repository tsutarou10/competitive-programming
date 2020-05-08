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

#define MAX_N 10
int n;
int p[MAX_N], q[MAX_N];

void print_setprecision(int i, long double rsl) {
  cout << fixed << setprecision(i) << rsl << endl;
}

void input() {
  cin >> n;
  rep(i, 0, n) cin >> p[i];
  rep(i, 0, n) cin >> q[i];
}

bool isEqual(int x[], int y[]) {
  rep(i, 0, n) if(x[i] != y[i]) return false;
  return true;
}

void solve() {
  int arr[n];
  rep(i, 0, n) arr[i] = i + 1;
  int cnt = 0;
  int orderP = 0, orderQ = 0;
  do {
    if(isEqual(arr, p)) orderP = cnt;
    if(isEqual(arr, q)) orderQ = cnt;
    ++cnt;
  } while (next_permutation(arr, arr + n));
  cout << abs(orderP - orderQ) << endl;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  input();
  solve();
}
