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

using namespace std;
// ascending order
#define vsort(v) sort(v.begin(), v.end())
// descending order
#define vsort_r(v) sort(v.begin(), v.end(), greater<int>())
#define vunique(v) unique(v.begin(), v.end())
#define mp make_pair
#define ts(x) to_string(x)
#define rep(i, a, b) for(int i = (int)a; i < (int)b; i++)
#define repm(i, a, b) for(int i = (int)a; i > (int)b; i--)
#define bit(a) bitset<8>(a)
#define des_priority_queue priority_queue<int, vector<int>, greater<int> >
#define all(v) (v).begin(), (v).end()
#define initArray(a, array_size, n) fill(a, a + array_size, n)
typedef long long ll;
typedef pair<int, int> P;
const ll INF = 1e18;

ll modinv(ll a, ll m) {
	ll b = m, u = 1, v = 0;
	while(b) {
		ll t = a / b;
		a -= t * b; swap(a, b);
		u -= t * v; swap(u, v);
	}

	u %= m;
	if(u < 0) u += m;
	return u;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	ll mod = 1e9 + 7;
	ll a = 12345678900000;
	ll b = 100000;

	a %= mod;
	cout << a * modinv(b, mod) % mod << endl;
}
