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

#define MAX_V 1000000

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int dx[4] = {0, -1, 1, 0};
	int dy[4] = {-1, 0, 0, 1};
	vector<int> ans;
	while(true) {
		int rsl = 0;
		int w, h;
		cin >> w >> h;
		if(w == 0 and h == 0) break;
		int maze[h][w];
		rep(i, 0, h) rep(j, 0, w) {
			cin >> maze[i][j];
		}

		rep(i, 0, h) rep(j, 0, w) {
			int sx = 0, sy = 0;
			if(maze[i][j] == 1) {
				sx = j, sy = i;
			} else continue;
			stack<pair<int, int> > s;
			s.push(make_pair(sx, sy));
			bool reached[h][w];
			memset(reached, false, sizeof(reached));
			reached[sy][sx] = true;
			maze[sy][sx] = 0;

			while(!s.empty()) {
				pair<int, int> p = s.top();
				s.pop();
				int x = p.first, y = p.second;
				rep(k, 0, 4) {
					int nx = x + dx[k], ny = y + dy[k];
					if(0 <= nx and nx < w and 0 <= ny and ny < h) {
						if(reached[ny][nx]) continue;
						if(maze[ny][nx] = 0) {
							continue;
						} else {
							maze[ny][nx] = 0;
							reached[ny][nx] = true;
							s.push(make_pair(nx, ny));
						}
					}
				}
			}
			
			rsl++;
		}
		ans.push_back(rsl);
	}
	rep(i, 0, ans.size()) cout << ans[i] << endl;
}
