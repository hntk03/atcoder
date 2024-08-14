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

const ll INF = 1e18;


int main(void){

	ll N, M; cin >> N >> M;

  auto restrict = [N](ll x) -> bool {
		return 1 <= x and x <= N;
	};

	ll ans = INF;
	for(ll a=1;a*a-a<M;a++){
		ll b = (M+a-1)/a;
		if(restrict(a) and restrict(b)){
			ll X = a*b;
			ans = min(ans, X);
		}
	}

	if(ans == INF) cout << -1 << endl;
	else cout << ans << endl;

	return 0;

}
