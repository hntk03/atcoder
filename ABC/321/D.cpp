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
	ll P; cin >> N >> M >> P;

	vector<ll> A(N), B(M);
	REP(i,N) cin >> A[i];
	REP(i,M) cin >> B[i];


	sort(B.begin(), B.end());
	vector<ll> sum(M+1);
	REP(i,M) sum[i+1] = sum[i] + B[i];

	ll ans = 0;
	REP(i,N){
		ll x = P - A[i];
		int idx = upper_bound(B.begin(), B.end(), x) - B.begin();
		ll left = A[i] * idx + sum[idx];
		ll right = P * (M - idx);

		ans += left + right;
	}

	cout << ans << endl;

	return 0;

}
