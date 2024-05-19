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
	vector<ll> A(N);
	REP(i,N) cin >> A[i];

	ll S = 0;
	REP(i,M) S += (i+1)*A[i];

	ll T = 0;
	REP(i,M) T += A[i];

	ll ans = S;
	FOR(i,1,N-M+1){
		S -= (T - M*A[M+i-1]);
		T -= A[i-1];
		T += A[M+i-1];
		ans = max(S, ans);
	}

	cout << ans << endl;
	return 0;

}
