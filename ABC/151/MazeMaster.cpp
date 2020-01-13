#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1001001001;


int main(void){

	int H, W; cin >> H >> W;
	char S[H][W];
	REP(i,H) REP(j,W) cin >> S[i][j];

	int x[] = {0, 0, -1, 1};
	int y[] = {1, -1, 0, 0};

	int ans = 0;

	REP(i,H){
		REP(j,W){
			if(S[i][j] == '#') continue;
			vector<vector<int>> dist(H, vector<int>(W, INF));
			queue<pair<int, int>> q;
			auto update = [&](int i, int j, int x){
				if(dist[i][j] != INF) return;
				dist[i][j] = x;
				q.push(make_pair(i, j));
			};
			update(i, j, 0);
			while(!q.empty()){
				int a = q.front().first;
				int b = q.front().second; q.pop();
				REP(d, 4){
					int di = a+y[d], dj = b+x[d];
					if(di<0 or di >=H or dj < 0 or dj >= W) continue;
					if(S[di][dj] == '#') continue;
					update(di, dj, dist[a][b]+1);
				}
			}

			REP(a,H){
				REP(b, W){
					if(dist[a][b] == INF) continue;
					ans = max(ans, dist[a][b]);
				}
			}

		}
	}

	cout << ans << endl;

	return 0;

}
