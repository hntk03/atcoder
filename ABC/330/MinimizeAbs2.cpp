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

	ll D; cin >> D;	

	ll ans = 2e12;
	for(ll i = 0;i<1e6;i++){
		ll diff = D - i*i;
		ll y = sqrt(diff);
		ll now = abs(i*i + y*y - D);
		ans = min(ans, now);
		now = abs(i*i + (y+1)*(y+1) - D);
		ans = min(ans, now);
		now = abs(i*i + (y-1)*(y-1) - D);
		ans = min(ans, now);
	}

	cout << ans << endl;
	return 0;

}
