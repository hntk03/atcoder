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

struct Edge{
	int to, w;

	Edge(int _to, int _w){
		to = _to;
		w = _w;
	}
};

int main(void){

	int N, M; cin >> N >> M;

	vector<vector<Edge>> g(N);

	REP(i,M){
		int u, v, w; cin >> u >> v >> w;
		u--; v--;
		g[u].emplace_back(v, w);
		g[v].emplace_back(u, -w);
	}

	vector<bool> used(N);
	vector<ll> x(N);

	REP(sv,N){
		if(used[sv]) continue;


		auto dfs = [&](auto dfs, int v, ll val){
			if(used[v]) return;
			used[v] = true;
			x[v] = val;

			for(Edge e : g[v]){
				dfs(dfs, e.to, val+e.w);
			}
		};
		dfs(dfs, sv, 0);
	}

	REP(i,N) cout << x[i] << " ";
	cout << endl;

	return 0;

}
