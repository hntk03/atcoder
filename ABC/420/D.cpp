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

struct Pos{
	int i;
	int j;
	bool b;
	Pos(int i, int j, bool b): i(i), j(j), b(b){};
};

int main(void){

	int H, W; cin >> H >> W;
	vector<string> A(H);
	REP(i,H) cin >> A[i];

	vector<vector<vector<int>>> cost(H, vector<vector<int>>(W, vector<int>(2, -1)));

	queue<Pos> que;
	REP(i,H) REP(j,W) if(A[i][j] == 'S'){
		que.push(Pos(i, j, false));
		cost[i][j][0] = 0;
	} 

	const int di[] = { -1, 1, 0, 0 };
	const int dj[] = { 0, 0, 1, -1 };

	while(!que.empty()){
		Pos t = que.front();
		que.pop();

		REP(i,4){
			int ni = t.i + di[i], nj = t.j + dj[i];
			if(ni < 0 or nj < 0 or ni == H or nj == W) continue;
			if(t.b){
				if(A[ni][nj] == '#' || A[ni][nj] == 'o') continue;
				if(cost[ni][nj][1] != -1) continue;
				if(A[ni][nj] == '?'){
					if(cost[ni][nj][0] != -1) continue;
					cost[ni][nj][0] = cost[t.i][t.j][1] + 1;
					que.push(Pos(ni, nj, false));
					cost[ni][nj][1] = cost[t.i][t.j][1] + 1;
					que.push(Pos(ni, nj, true));
				}else{
					cost[ni][nj][1] = cost[t.i][t.j][1] + 1;
					que.push(Pos(ni, nj, true));
				}
			}else{
				if(A[ni][nj] == '#' || A[ni][nj] == 'x') continue;
				if(cost[ni][nj][0] != -1) continue;
				if(A[ni][nj] == '?'){
					if(cost[ni][nj][1] != -1) continue;
					cost[ni][nj][1] = cost[t.i][t.j][0] + 1;
					que.push(Pos(ni, nj, true));
					cost[ni][nj][0] = cost[t.i][t.j][0] + 1;
					que.push(Pos(ni, nj, false));
				} else{
					cost[ni][nj][0] = cost[t.i][t.j][0] + 1;
					que.push(Pos(ni, nj, false));
				}
			}
		}
	}

	REP(i, H){
		REP(j,W){
			if(A[i][j] == 'G'){
				if(cost[i][j][0] == -1 and cost[i][j][1] != -1) cout << cost[i][j][1] << endl;
				else if(cost[i][j][0] != -1 and cost[i][j][1] == -1) cout << cost[i][j][0] << endl;
				else if(cost[i][j][0] != -1 and cost[i][j][1] != -1) cout << min(cost[i][j][0], cost[i][j][1]) << endl;
				else cout << -1 << endl;
				return 0;
			}
		}
	}

	return 0;

}
