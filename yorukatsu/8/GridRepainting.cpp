#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;



int H, W;
char mp[51][51];


int bfs(void){

	queue<pair<int, int>> q;
	int d[51][51];
	REP(i,51) REP(j,51) d[i][j] = INF;

	d[0][0] = 0;

	int dx[] = {-1, 0, 0, 1};
	int dy[] = {0, 1, -1, 0};


	q.push(make_pair(0, 0));

	while(!q.empty()){
		pair<int, int> p = q.front(); q.pop();
		if(p.first == H and p.second == W) break;
		REP(i,4){
			int nx = p.first + dx[i];
			int ny = p.second + dy[i];
			if(nx >= 0 and nx < H and ny >= 0 and ny < W and mp[nx][ny] == '.' and d[nx][ny] == INF){
				q.push(make_pair(nx, ny));
				d[nx][ny] = d[p.first][p.second] + 1;
			}
		}
	}

	return d[H-1][W-1];

}


int main(void){

	cin >> H >> W;
	REP(i,H){
		REP(j,W){
			cin >> mp[i][j];
		}
	}

	int cnt = 0;
	REP(i,H){
		REP(j,W){
			if(mp[i][j] == '#') cnt++;
		}
	}




	int ans = H*W -(bfs() + cnt + 1);
	cout << ans << endl;


	return 0;

}
