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

struct edge{
	int to;
	ll cost; 
	edge(int _to, ll _cost) : to(_to), cost(_cost){}
};

int main(void){

	int N, M; cin >> N >> M;
	vector<ll> A(N);
	REP(i,N) cin >> A[i];

	vector<vector<edge>> graph(N);
	REP(i,M){
	  int U, V;
		ll B; 
		cin >> U >> V >> B;
		U--; V--;

		graph[U].push_back(edge(V, B));
		graph[V].push_back(edge(U, B));
	}

	vector<ll> dist(N, 1e18);
	priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> que;

	que.push(make_pair(A[0], 0));

	while(!que.empty()){
		pair<ll, int> c = que.top();
		ll d = c.first;
		int idx = c.second;
		que.pop();
		if(d > dist[idx]) continue;
		for(int i = 0; i < graph[idx].size(); i++){
			int to = graph[idx][i].to;
			ll cost = graph[idx][i].cost;
			if(d + cost + A[to] < dist[to]){
				dist[to] = d + cost + A[to];
				que.push(make_pair(dist[to], to));
			}
		}
	}
	
	FOR(i,1,N) cout << dist[i] << " ";
	cout << endl;

	return 0;

}
