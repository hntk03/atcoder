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

	int N, Q; cin >> N >> Q;	

	vector<ll> A(N), X(Q), S(N+1);
	REP(i,N) cin >> A[i];
	REP(i,Q) cin >> X[i];
	sort(A.begin(), A.end());
	REP(i,N) S[i+1] = S[i] + A[i];


	vector<ll> ans(Q);
	REP(i,Q){
		int idx = lower_bound(A.begin(), A.end(), X[i]) - A.begin();
		ll r = idx * X[i] - S[idx];
		ll l = (S[N]- S[idx]) - (N - idx) * X[i];
		ans[i] = r + l;
	}

	REP(i,Q){
		cout << ans[i] << endl;
	}

	return 0;

}
