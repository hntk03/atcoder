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

int di[] = {-1, 0, 1, 0};
int dj[] = {0, -1, 0, 1};

int main(void){

	int H, W; cin >> H >> W;	
	vector<string> S(H);
	REP(i,H) cin >> S[i];

	vector<vector<bool>> x(H, vector<bool>(W));
	REP(i,H){
		REP(j,W){
			if(S[i][j] != '#') continue;

			x[i][j] = true;

			REP(v,4){
				int ni = i + di[v], nj = j + dj[v];
				if(ni < 0 or ni >= H or nj < 0 or nj >= W) continue;
				x[ni][nj] = true;
			}
		}
	}

	vector<vector<bool>> used(H, vector<bool>(W));
	vector<vector<int>> last(H, vector<int>(W));
	int tm = 0;
	int ans = 1;
	REP(si,H){
		REP(sj,W){
			if(x[si][sj]) continue;
			if(used[si][sj]) continue;
			tm++;
			int cnt = 0;
			queue<pair<int, int>> q;
			q.push(make_pair(si, sj));
			used[si][sj] = true;

			while(!q.empty()){
				auto [i, j] = q.front(); q.pop();
				cnt++;
				REP(v,4){
					int ni = i + di[v], nj = j + dj[v];
					if(ni < 0 or ni >= H or nj < 0 or nj >= W) continue;
					if(used[ni][nj]) continue;
					if(x[ni][nj]){
						if(last[ni][nj] != tm) cnt++, last[ni][nj] = tm;
						continue;
					} 

					q.push(make_pair(ni, nj));
					used[ni][nj] = true;
				}
			}
			ans = max(ans, cnt);
		}
	}
	cout << ans << endl;

	return 0;
}
