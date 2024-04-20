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

int N, M;
vector<vector<int> > g;
vector<bool> vis;

void dfs(int i){
	if(vis[i]) return;

	vis[i] = true;
	for(int u : g[i]){
		dfs(u);
	}
}


int main(void){

	cin >> N >> M;	

	g.resize(N);
	REP(i,M){
		int u, v; cin >> u >> v;
		u--; v--;
		g[u].push_back(v);
		g[v].push_back(u);
	}

	int ans = 0;
	vis.resize(N);
	REP(i,N){
		if(!vis[i]){
			ans++;
			dfs(i);
		}
	}

	cout << ans << endl;
	return 0;

}


