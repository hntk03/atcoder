#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;
const int mod = 1e9+7;

ll pow_mod(ll n, ll m, ll p){

	if(m == 0) return 1;
	else if(m%2 == 1) return pow_mod(n, m-1, p) * n % p;
	else{
		ll t = pow_mod(n, m/2, p);
		return t * t % p;
	} 
}

ll calc(ll n, ll r){
	ll up = 1;
	ll down = 1;
	REP(i,r){
		up = (up % mod) * ((n-i) % mod);
		down = (down % mod) * ((i+1) % mod);
	}
	return up / down;
}

int main(void){

	ll n, a, b; cin >> n >> a >> b;

	ll ans = pow_mod(2, n, mod);
	ans -= calc(n, a);
	ans -= calc(n, b);
	ans -= 1;
	cout << ans << endl;


	return 0;

}
