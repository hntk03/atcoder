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

vector<vector<int> > g;

int dfs(int v, int from){
	if(g[v].size() == 1) return 1;

	int sum = 0;
	REP(i,g[v].size()){
		int to = g[v][i];
		if(to == from) continue;
		sum += dfs(to, v);
	}

	sum++;

	return sum;
}

int main(void){

	int N; cin >> N;
	g.resize(N);

	REP(i,N-1){
		int u, v; cin >> u >> v;
		u--; v--;

		g[u].push_back(v);
		g[v].push_back(u);
	}

	vector<int> cost;
	REP(i,g[0].size()){
		cost.push_back(dfs(g[0][i], 0));
	}

	int ans = 0;
	sort(cost.begin(), cost.end());
	REP(i,cost.size()-1){
		ans += cost[i];
	}

	ans++;

	cout << ans << endl;

	return 0;

}
