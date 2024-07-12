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

vector<set<int>> g;
vector<bool> visited;

void dfs(int v){
	visited[v] = true;
	cout << v+1 << " ";

	for(int to : g[v]){
		if(visited[to]) continue;
		dfs(to);
		cout << v + 1 << " ";
	}
}

int main(void){

	int N; cin >> N;	
	g.resize(N);
	visited.assign(N, false);

	REP(i,N-1){
		int A, B; cin >> A >> B;
		A--; B--;
		g[A].insert(B);
		g[B].insert(A);
	}

	dfs(0);
	cout << endl;

	return 0;

}
