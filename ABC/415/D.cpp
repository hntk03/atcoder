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

	ll N; int M; cin >> N >> M;
	vector<pair<ll, ll>> ps;

	REP(i,M){
		ll A, B; cin >> A >> B;
		ps.push_back(make_pair(A-B, A));
	}

	sort(ps.begin(), ps.end());

	ll ans = 0;
	for(auto [d, A] : ps){
		if(N < A) continue;
		ll x = (N-A)/d + 1;
		ans += x;
		N -= d*x;
	}

	cout << ans << endl;
	return 0;
}
