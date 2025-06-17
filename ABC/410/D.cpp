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
	Edge(int to, int w): to(to), w(w){};
};

int main(void){

	int N, M; cin >> N >> M;
	int W = 1 << 10;

	vector<vector<Edge>> g(N);
	REP(i,M){
		int a, b, w; cin >> a >> b >> w;
		a--; b--;
		g[a].emplace_back(b, w);
	}

	vector<bool> visited(N*W);
	queue<int> q;
	auto push = [&](int v, int x){
		int vid = v*W+x;
		if(visited[vid]) return;
		visited[vid] = true;
		q.push(vid);
	};

	push(0, 0);
	while(q.size()){
		int vid = q.front(); q.pop();
		int v = vid/W, x = vid%W;
		for(auto e : g[v]){
			push(e.to, x^e.w);
		}
	}

	REP(x,W){
		if(visited[(N-1)*W+x]){
			cout << x << endl;
			return 0;
		}
	}

	cout << -1 << endl;
	return 0;

}
