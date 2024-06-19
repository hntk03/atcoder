#include <bits/stdc++.h>
#include <atcoder/all>

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

using namespace atcoder;

const int INF = 1e9;


int main(void){

	int N, M; cin >> N >> M;

	dsu uf(N);

	REP(i,M){
		int A, B; cin >> A >> B;
		A--; B--;

		uf.merge(A, B);
	}

	ll ans = 0;
	REP(i,N) if(uf.leader(i) == i){
		int s = uf.size(i);
		ans += s*ll(s-1)/2;
	}

	ans -= M;

	cout << ans << endl;

	return 0;

}
