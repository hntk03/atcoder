#include <bits/stdc++.h>
#include <atcoder/dsu>

using namespace std;
using namespace atcoder;
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
	dsu uf(N);

	int ans = 0;
	REP(i,M){
		int u, v; cin >> u >> v;
		u--; v--;

		if(uf.same(u,v)){
			ans++;
			continue;
		}

		uf.merge(u, v);
	}

	cout << ans << endl;

	return 0;
}
