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
const int INF = 1000000000;

#define MAX_V 1000000
// (行き先, 容量, 逆辺)
struct edge {
	int to, cap, rev;
};
vector<edge> G[MAX_V]; // グラフの隣接リスト
int level[MAX_V]; // sからの距離
int iter[MAX_V]; // どこまで調べ終わったか

// fromからtoへ向かう容量capの辺をグラフに追加
void add_edge(int from, int to, int cap) {
	G[from].push_back((edge){to, cap, G[to].size()});
	G[to].push_back((edge){from, 0, G[from].size() - 1});
}

// sからの最短距離を計算
void bfs(int s) {
	memset(level, -1, sizeof(level));
	queue<int> que;
	level[s] = 0;
	que.push(s);
	while(!que.empty()) {
		int v = que.front(); que.pop();
		rep(i, 0, G[v].size()) {
			edge &e = G[v][i];
			if(e.cap > 0 && level[e.to] < 0) {
				level[e.to] = level[v] + 1;
				que.push(e.to);
			}
		}
	}
}

// 増加パスを探す
int dfs(int v, int t, int f) {
	if(v == t) return f;
	for(int &i = iter[v]; i < G[v].size(); i++) {
		edge &e = G[v][i];
		if(e.cap > 0 && level[v] < level[e.to]) {
			int d = dfs(e.to, t, min(f, e.cap));
			if(d > 0) {
				e.cap -= d;
				G[e.to][e.rev].cap += d;
				return d;
			}
		}
	}
	return 0;
}

// sからtへの最大流を求める
int max_flow(int s, int t) {
	int flow = 0;
	for(;;) {
		bfs(s);
		if(level[t] < 0) return flow;
		memset(iter, 0, sizeof(iter));
		int f;
		while((f = dfs(s, t, INF)) > 0) flow += f;
	}
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
}
