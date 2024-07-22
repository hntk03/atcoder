#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using ll = long long;
using namespace atcoder;

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
	int to;
	ll x;
	ll y;
	Edge(int to, ll x, ll y) : to(to), x(x), y(y){};
};

int main(void){

	int N, M; cin >> N >> M;	
	vector<vector<Edge>> g(N);
	REP(i,M){
		int A, B; cin >> A >> B;
		ll X, Y; cin >> X >> Y;
		A--; B--;

		g[A].push_back(Edge(B, X, Y));
		g[B].push_back(Edge(A, -X, -Y));

	}

	const ll INF = 1e18;
	vector<ll> x(N, INF), y(N, INF);
	x[0] = y[0] = 0;

	queue<int> q;
	q.push(0);

	while(!q.empty()){
		int v = q.front(); q.pop();
		for(auto [u, dx, dy] : g[v]){
			if(x[u] != INF) continue;
			x[u] = x[v] + dx;
			y[u] = y[v] + dy;
			q.push(u);
		}
	}

	REP(i,N){
		if(x[i] == INF) cout << "undecidable" << endl;
		else cout << x[i] << " " << y[i] << endl;
	}

	return 0;
}
