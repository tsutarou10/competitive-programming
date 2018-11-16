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

template<class V, int MV> class Bellman_Ford {
	public:
		int NV;
		V d[MV];
		vector<pair<int, V> > E[MV];

		void add_edge(int from, int to, V cost) {
			E[from].push_back(make_pair(to, cost));
		}

		bool find_negative_loop(int s, int NV) { // true : ok, false : cycle
			rep(i, 0, NV) d[i] = INF;
			d[s] = 0;
			rep(i, 0, NV) {
				bool update = false;
				rep(j, 0, NV) rep(k, 0, E[j].size()) {
					if(d[E[j][k].first] > d[j] + E[j][k].second) d[E[j][k].first] = d[j] + E[j][k].second, update = true;
				}
				if(!update) return true;
			}
			return false;
		}
};

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int N, E, r;
	cin >> N >> E >> r;
	Bellman_Ford<ll, 1000> bf;
	rep(i, 0, E) {
		int s, t, d;
		cin >> s >> t >> d;
		bf.add_edge(s, t, d);
	}

	if(!bf.find_negative_loop(r, N)) {
		cout << "NEGATIVE CYCLE" << endl;
		return 0;
	}
	rep(i, 0, N) {
		if(i == r || bf.d[i] != INF) cout << bf.d[i] << endl;
		else cout << "INF" << endl;
	}
}
