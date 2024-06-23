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

vector<vector<int>> g;
vector<int> group;

void dfs(int u, int cnt){
	if(group[u] != -1) return;
	group[u] = cnt;

	REP(i,g[u].size()){
		dfs(g[u][i], cnt);
	}
}

int main(void){

	int N, M; cin >> N >> M;
	g.resize(N);

	REP(i,M){
		int u, v; cin >> u >> v;
		u--; v--;
		g[u].push_back(v);
		g[v].push_back(u);
	}

	group.assign(N, -1);

	int cnt = 0;
	REP(i,N){
		if(group[i] != -1) continue;
		dfs(i,cnt);
		cnt++;
	}

	map<int, int> edge;
	REP(i,N) edge[group[i]]++;

	map<int, int> mp;
	REP(i,N){
		int gnum = group[i];
		mp[gnum] += g[i].size();
	}

	bool ans = true;
	for(auto [i, cnt] : mp){
		int x = cnt / 2;
		if(x != edge[i]) ans = false;
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
