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

int main(void){

	int N, K; cin >> N >> K;
	vector<vector<int>> g(N);

	REP(i,N-1){
		int A, B; cin >> A >> B;
		A--; B--;

		g[A].push_back(B);
		g[B].push_back(A);
	}

	map<int, bool> mp;
	vector<bool> visited(N, false);

	auto dfs = [&](auto f, int v) -> int {
		visited[v] = true;

		int child = 0;
		for(int nv : g[v]){
			if(visited[nv]) continue;
			child += f(f, nv);
		}

		if(child > 0 or mp[v]){
			child++;
		}

		return child;
	};

	
	int first = 0;
	REP(i,K){
		int v; cin >> v;
		v--;
		mp[v] = true;
		if(i == 0) first = v;
	}

	int ans = dfs(dfs, first);
	cout << ans << endl;

	return 0;

}
