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

	ll x, a, d, n;	
	cin >> x >> a >> d >> n;

	if(d == 0){
		cout << abs(a-x) << endl;
		return 0;
	}

	if(d < 0){
		a = a+d*(n-1);
		d = -d;
	}

	ll i = (x-a) / d;
	auto f = [&](ll i){
		if(i < 0) i = 0;
		if(i >= n) i = n-1;
		return a+d*i;
	};

	ll ans = abs(f(i)-x);
	ans = min(ans, abs(f(i+1)-x));

	cout << ans << endl;

	return 0;

}
