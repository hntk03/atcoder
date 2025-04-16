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

	int N, M; cin >> N >> M;
	vector<set<int>> g(N);
	
	int ans = 0;
	REP(i,M){
		int u, v; cin >> u >> v;
		u--; v--;

		if(u == v){
			ans++;
			continue;
		}

		if(v < u) swap(u, v);

		if(g[u].count(v)) ans++;
		else g[u].insert(v);
	}

	cout << ans << endl;

	return 0;

}
