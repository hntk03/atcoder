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

	int N, M;
	ll D;
	cin >> N >> M >> D;
	vector<ll> A(N), B(M);
	REP(i,N) cin >> A[i];
	REP(i,M) cin >> B[i];

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	ll ans = -1;
	REP(i,N){
		ll l = A[i] - D, r = A[i] + D;
		int j = upper_bound(B.begin(), B.end(), r) - B.begin();
		if(j > 0){
			ll x = B[j-1];
			if(l <= x){
				ans = max(ans, A[i]+x);
			}
		}
	}

	cout << ans << endl;

	return 0;

}
