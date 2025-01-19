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

	ll r; cin >> r;

	auto inside = [&](ll x, ll y){
		x = 2*x + 1;
		y = 2*y + 1;
		return x*x + y*y <= r*r*4;
	};

	ll x = 0;
	ll ans = 0;
	for(ll y = r; y >= 0; y--){
		while(inside(x+1, y)) x++;
		ans += x;
	}

	ans *= 4; ans++;
	cout << ans << endl;
	return 0;
}
