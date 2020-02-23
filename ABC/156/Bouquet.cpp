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


int main(void){

	ll n, a, b; cin >> n >> a >> b;

	ll ans = 0;
	ll up = (ll)1;
	ll down = (ll)1;
	FOR(i,1,n+1){
		up = (up % mod) * ((n-i+1) % mod);
		down = (down % mod) * (i % mod);
		// cout <<i <<" " << up << " " << down << endl;
		if(i != a and i != b) ans += (up / down) % mod ;
		// cout <<i << ":" <<calc(n, i) << endl;
		// ans += calc(n, i) % mod;
	}
	cout << ans << endl;


	return 0;

}
