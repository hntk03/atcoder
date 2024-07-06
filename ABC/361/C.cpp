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
	vector<ll> A(N);
	REP(i,N) cin >> A[i];

	sort(A.begin(), A.end());

	int l = K, r = N-1;
	ll ans = 1e18;
	REP(i,K+1){
		ans = min(ans, A[r] - A[l]);
		l--;
		r--;
	}

	cout << ans <<  endl;

	return 0;

}
