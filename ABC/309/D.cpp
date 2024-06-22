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
int N1, N2;
vector<vector<int> > g;

vector<int> bfs(int start){
	vector<int> dist(N1+N2, -1);

	queue<int> que;
	que.push(start);
	dist[start] = 0;
	while(!que.empty()){
		int v = que.front(); que.pop();
		REP(i,g[v].size()){
			int to = g[v][i];
			if(dist[to] != -1) continue;
			dist[to] = dist[v] + 1;
			que.push(to);
		}
	}

	return dist;
}

int getMax(vector<int> v){
	int ret = 0;
	REP(i,v.size()){
		ret = max(ret, v[i]);
	}

	return ret;
}

int main(void){

	int M; cin >> N1 >> N2 >> M;	
	g.resize(N1+N2);
	REP(i,M){
		int a, b; cin >> a >> b;
		a--; b--;
		g[a].push_back(b);
		g[b].push_back(a);
	}

	vector<int> from1 = bfs(0);
	vector<int> fromN1N2 = bfs(N1+N2-1);

	int max1 = getMax(from1);
	int max2 = getMax(fromN1N2);

	cout << max1 + max2 + 1 << endl;

	return 0;

}
