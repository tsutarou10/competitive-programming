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
typedef long long ll;
typedef pair<int, int> P;
const ll INF = 1e18;

const int MAX_N = 1 << 17;

// セグメント木を持つグロバール配列
int n, dat[2 * MAX_N - 1];

// 初期化
void init(int n_) {
	// 簡単のため、要素数を2のべき乗に
	n = 1;
	while(n < n_) n *= 2;

	// 全ての値をINT_MAXに
	for(int i = 0; i < 2 * n - 1; i++) dat[i] = INT_MAX;
}

// k番目の値(0-indexed)をaに変更
void update(int k, int a) {
	// 葉の節点
	k += n - 1;
	dat[k] = a;
	// 登りながら更新
	while(k > 0) {
		k = (k - 1) / 2;
		dat[k] = min(dat[k * 2 + 1], dat[k * 2 + 2]);
	}
}

// [a, b)の最小値を求める
// 後ろの方の引数は、計算の簡単のための引数
// kは節点の番号、１、rはその節点が[1,r)に対応づいていることを表す
// したがって、外からはquery(a, b, 0, 0, n)として呼ぶ
int query(int a, int b, int k, int l, int r) {
	// [a, b)と[l,r)が交差しなければ、INT_MAX
	if(r <= a or b <= l) return INT_MAX;

	// [a, b)が[l,r)を完全に含んでいれば、この節点の値
	if(a <= l and r <= b) return dat[k];
	else {
		// そうでなければ、2つの子の最小値
		int vl = query(a, b, k * 2 + 1, l, (l + r) / 2);
		int vr = query(a, b, k * 2 + 2, (l + r) / 2, r);
		return min(vl, vr);
	}
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	int a[n];
	init(n);
	rep(i, 0, n) {
		cin >> a[i];
		update(i, a[i]);
	}

	rep(i, 0, n * n) cout << dat[i] << " ";
	cout << endl;
	cout << query(0, 2, 0, 0, n) << endl;

	/*
	ll rsl = 0;
	rep(l, 0, n) rep(r, l, n) {
		rsl += query(l, r, 0, 0, n);
	}

	cout << rsl << endl;
	*/
}
