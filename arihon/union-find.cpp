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
typedef long long ll;
typedef pair<int, int> P;
const ll INF = 1e18;

#define MAX_N 100000

int par[MAX_N]; // 親
int depth[MAX_N]; // 木の深さ

struct UnionFind {
    vector<int> par;
    UnionFind(int n) : par(n, -1) { }
    void init(int n) { par.assign(n, -1); }

    // 木の根を求める
    int root(int x) {
        if(par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }

    // xとyの属する集合を併合
    void unite(int x, int y) {
        x = root(x);
        y = root(y);
        if(x == y) return;

        if(par[x] > par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;

    }

    // xとyが同じ集合に属するか否か
    bool same(int x, int y) {
        return root(x) == root(y);
    }

    int size(int x) {
        return -par[root(x)];
    }
};

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

    int N = 10;
    UnionFind uf(N);


}
