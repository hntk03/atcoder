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

	int N, M; cin >> N >> M;
	vector<string> S(N);
	REP(i,N) cin >> S[i];

	const int di[] = {-1, 1, 0,  0};
	const int dj[] = { 0, 0, 1, -1};

	vector<vector<bool>> visited(N, vector<bool>(M));
	vector<vector<bool>> passed(N, vector<bool>(M));
	queue<pair<int, int>> q;

	q.push(make_pair(1, 1)); 
	passed[1][1] = visited[1][1] = true;
	while(!q.empty()){
		auto [i, j] = q.front(); q.pop();
		REP(v,4){
			int ni = i, nj = j;
			while(S[ni][nj] == '.'){
				passed[ni][nj] = true;
				ni += di[v]; nj += dj[v];
			}
			ni -= di[v]; nj -= dj[v];
			if(visited[ni][nj]) continue;
			q.push(make_pair(ni, nj));
			visited[ni][nj] = true;
		}
	}

	int ans = 0;
	REP(i,N) REP(j,M) ans += passed[i][j];
	cout << ans << endl;

	return 0;
}
