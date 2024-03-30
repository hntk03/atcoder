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

int H, W;
int ans = 0;
vector<string> S;
vector<vector<bool> > visited;

void dfs(int i, int j){
	if(i >= H || j >= W) return;
	if(i < 0 || j < 0) return;
	if(S[i][j] == '.') return;
	if(visited[i][j]) return;

	visited[i][j] = true;
	dfs(i+1, j);
	dfs(i+1, j+1);
	dfs(i, j+1);
	dfs(i-1, j+1);
	dfs(i-1, j);
	dfs(i-1, j-1);
	dfs(i, j-1);
	dfs(i+1, j-1);

}

int main(void){

	cin >> H >> W;
	REP(i,H){
		string s; cin >> s;
		S.push_back(s);
	}

	visited.assign(H, vector<bool>(W, false));

	REP(i,H){
		REP(j,W){
			if(visited[i][j]) continue;
			if(S[i][j] == '.') continue;
			dfs(i, j);
			ans++;
		}
	}

	cout << ans << endl;

	return 0;

}
