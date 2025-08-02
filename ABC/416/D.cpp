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
	int N, M; cin >> N >> M;
	vector<int> A(N), B(N);
	REP(i,N) cin >> A[i];
	REP(i,N) cin >> B[i];

	sort(A.rbegin(), A.rend());
	sort(B.begin(), B.end());

	ll ans = 0;
	REP(i,N) ans += A[i] + B[i];

	int bi = 0;
	for(int na : A){
		while(bi < N and na + B[bi] < M) bi++;
		if(bi == N) break;
		ans -= M;
		bi++;
	}

	cout << ans << endl;
}

int main(void){

	int T; cin >> T;
	REP(i,T) solve();

	return 0;

}
