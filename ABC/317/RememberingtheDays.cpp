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

struct Edge {
	int to, cost;
	Edge(int to=0, int cost=0): to(to), cost(cost){}
};

const int INF = 1e9;

int main(void){

	int N, M; cin >> N >> M;
	vector<vector<Edge> > g(N);

	REP(i,M){
		int A, B, C; cin >> A >> B >> C;
		A--; B--;
		g[A].emplace_back(B, C);
		g[B].emplace_back(A, C);
	}

	int ans = 0;
	auto f = [&](auto f, int v, vector<bool> visited, int dist) -> void{
		visited[v] = true;
		ans = max(ans, dist);
		for(auto e : g[v]){
			if(visited[e.to]) continue;
			f(f, e.to, visited, dist+e.cost);
		}
	};

	REP(i,N) f(f, i, vector<bool>(N), 0);
	
	cout << ans << endl;

	return 0;

}
