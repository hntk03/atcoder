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

	int N;
	ll X; 
	cin >> N >> X;

	vector<ll> A(N), B(N);
	REP(i,N) cin >> A[i] >> B[i];

	ll ans = 1e19;
	ll s = 0, l = 1e19;
	REP(r,N){
		s += A[r] + B[r];
		l = min(l, B[r]);
		if(X < r+1) continue;
		ll now = s + l*(X-r-1);
		ans = min(ans, now);
	}

	cout << ans << endl;

	return 0;

}
