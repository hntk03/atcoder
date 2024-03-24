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

	ll N, M; cin >> N >> M;
	vector<ll> A(N);

	REP(i,N) cin >> A[i];
	A.push_back(1e12);
	sort(A.begin(), A.end());

	ll ans = 1;
	REP(i,N){
		auto it = upper_bound(A.begin(), A.end(), A[i]+M-1);

		ll idx = it - A.begin();
		ans = max(ans, idx - i);
	}

	cout << ans << endl;

	return 0;

}
