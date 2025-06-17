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
	vector<vector<Edge>> g(N);
	REP(i,M){
		int A, B, W; cin >> A >> B >> W;
		A--; B--;
		g[A].push_back(Edge(B, W));
	}

	queue<pair<int, int>> que;
	que.push(make_pair(0, 0));

	vector<vector<bool>> visited(N, vector<bool>(1<<10));
	while(!que.empty()){
		auto [v, w] = que.front(); que.pop();
		if(visited[v][w]) continue;

		visited[v][w] = true;
		for(auto edge : g[v]){
			que.push(make_pair(edge.to, w^edge.w));
		}
	}

	REP(i,1<<10){
		if(visited[N-1][i]){
			cout << i << endl;
			return 0;
		}
	}

	cout << -1 << endl;
	return 0;

}
