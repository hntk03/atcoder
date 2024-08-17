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

ll c2(ll n){
	return n*(n-1)/2;
}

int main(void){

	int N, M; cin >> N >> M;
	vector<vector<int>> to(N);

	REP(i,M){
		int u, v; cin >> u >> v;
		u--; v--;
		to[u].push_back(v);
		to[v].push_back(u);
	}

	vector<int> c(N, -1);
	vector<int> cvs(2);

	auto dfs = [&](auto dfs, int v, int nc=0) -> bool {
		if(c[v] != -1){
			return c[v] == nc;
		}
		c[v] = nc;
		cvs[nc]++;
		for(int u : to[v]){
			if(!dfs(dfs, u, !nc)){
				return false;
			}
		}
		return true;
	};

	ll ans = c2(N) - M;
	REP(i,N){
		if(c[i] != -1) continue;
		cvs = vector<int>(2);
		if(!dfs(dfs, i)){
			cout << 0 << endl;
			return 0;
		}
		for(int s : cvs) ans -= c2(s);
	}
	
	cout << ans << endl;
	return 0;

}
