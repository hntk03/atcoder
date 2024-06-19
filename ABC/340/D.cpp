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
	int to, cost;
	Edge(){}
	Edge(int to, int cost): to(to), cost(cost){}
};

int main(void){

	int N; cin >> N;
	vector<vector<Edge> > g(N);

	REP(i,N-1){
		int A, B, X; cin >> A >> B >> X;
		X--;

		g[i].emplace_back(i+1, A);
		g[i].emplace_back(X, B);
	}

	const ll INF = 1e18;
	vector<ll> dist(N, INF);
	using P = pair<ll, int>;

	priority_queue<P, vector<P>,greater<P>> q;
	dist[0] = 0;
	q.emplace(0, 0);

	while(!q.empty()){
		auto [d, v] = q.top(); q.pop();
		if(dist[v] != d) continue;

		for(auto e : g[v]){
			ll nd = d+e.cost;
			if(nd >= dist[e.to]) continue;
			dist[e.to] = nd;
			q.emplace(nd, e.to);
		}
	}

	cout << dist[N-1] << endl;

	return 0;

}
