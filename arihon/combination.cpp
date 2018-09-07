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
#define vunique(v) v.erase(unique(v.begin(), v.end()), v.end())
#define mp make_pair
#define ts(x) to_string(x)
#define rep(i, a, b) for(int i = (int)a; i < (int)b; i++)
#define repm(i, a, b) for(int i = (int)a; i > (int)b; i--)
#define bit(a) bitset<8>(a)
#define des_priority_queue priority_queue<int, vector<int>, greater<int> >
typedef long long ll;
typedef pair<int, int> P;
const ll INF = 1e18;
const int mod = 1e9 + 7;
const int MAX = 200002;
ll fact[MAX], invfact[MAX];

#define MAX_V 1000000

ll mod_pow(ll a, ll n, ll mod) {
	ll res = 1;
	while(n > 0) {
		if(n & 1) res = res * a % mod;
		a = a * a % mod;
		n >>= 1;
	}

	return res;
}

ll mod_inverse(ll a, ll m) {
	return mod_pow(a, m - 2, m);
}

ll nCr(ll n, ll r) {
	return fact[n] * invfact[r] % mod * invfact[n - r] % mod;
}

void init() {
	fact[0] = invfact[0] = 1;
	rep(i, 1, MAX) {
		fact[i] = (fact[i - 1] * i) % mod;
		invfact[i] = mod_inverse(fact[i], mod);
	}
}
	
int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	init();
	cout << nCr(10, 4) << endl;
}
