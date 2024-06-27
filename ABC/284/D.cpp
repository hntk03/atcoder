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
	ll N; cin >> N; 
	for(ll x = 2;; x++){
		if(N%x != 0) continue;
		N /= x;
		if(N%x == 0){
			printf("%lld %lld\n", x, N/x);
			return ;
		}
		ll p = round(sqrt(N));
		printf("%lld %lld\n", p, x);
		return ;
	}
}

int main(void){

	int T; cin >> T;
	REP(i,T) solve();

	return 0;
}
