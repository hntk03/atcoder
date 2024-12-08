#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	int H, W, D; cin >> H >> W >> D;

	vector<string> S(H);
	REP(i,H) cin >> S[i];


	vector<vector<int>> dist(H, vector<int>(W, INF));

	queue<pair<int, int>> que;
	REP(i,H){
		REP(j,W){
			if(S[i][j] == 'H'){
				que.push(make_pair(i, j));
				dist[i][j] = 0;
			}
		}
	}

	const int di[] = {-1, 0, 1, 0};
	const int dj[]= {0, -1, 0, 1};

	while(!que.empty()){
		auto [i, j] = que.front(); que.pop();
		int d = dist[i][j];
		REP(v,4){
			int ni = i+di[v], nj = j+dj[v];
			if(ni < 0 or nj < 0 or ni == H or nj == W) continue;
			if(S[ni][nj] == '#') continue;
			if(dist[ni][nj] != INF) continue;
			dist[ni][nj] = d + 1;
			que.push(make_pair(ni, nj));
		}
	}

	int ans = 0;
	REP(i,H){
		REP(j,W){
			if(dist[i][j] <= D) ans++;
		}
	}
	
	cout << ans << endl;
	return 0;

}
