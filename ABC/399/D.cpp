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

void solve(){
	int N; cin >> N;
	int N2 = N*2;

	vector<int> A(N2);
	REP(i,N2) cin >> A[i];
	REP(i,N2) A[i]--;

	vector<vector<int>> is(N);
	REP(i,N2) is[A[i]].push_back(i);

	using P = pair<int, int>;
	set<P> cand;
	REP(i,N2-1){
		int x = A[i], y = A[i+1];
		if(x > y) swap(x, y);
		if(x == y) continue;

		cand.emplace(x, y);
	}

	int ans = 0;
	for(auto [x, y] : cand){
		int xl = is[x][0], xr = is[x][1];
		int yl = is[y][0], yr = is[y][1];
		if(xl+1 == xr) continue;
		if(yl+1 == yr) continue;
		if(abs(xl-yl) == 1 and abs(xr-yr) == 1) ans++;
	}

	cout << ans << endl;
}

int main(void){

	int T; cin >> T;

	REP(ti,T){
		solve();
	}

	return 0;

}
