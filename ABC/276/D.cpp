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

map<ll, ll> prime_factorize(ll N){
	map<ll, ll> res;
	if(N == 1){
		res[2] = 0;
		res[3] = 0;
		return res;
	}

	for(ll a = 2; a*a <= N; a++){
		if(N%a != 0) continue;
		ll ex = 0;

		while(N%a == 0){
			ex++;
			N /= a;
		}
		res[a] = ex;
	}

	if(N != 1) res[N] = 1;

	if(res.count(2) == 0) res[2] = 0;
	if(res.count(3) == 0) res[3] = 0;

	return res;

}

int main(void){

	int N; cin >> N;	
	vector<ll> a(N);
	REP(i,N) cin >> a[i];

	vector<map<ll, ll> > fac(N);
	REP(i,N) fac[i] = prime_factorize(a[i]);

	int num = fac.front().size() - 2;
	FOR(i,1,N){
		int now = fac[i].size() - 2;
		if(now != num){
			cout << -1 << endl;
			return 0;
		}
	}

	map<ll, bool> mp;
	for(auto [p, ex] : fac.front()) mp[p] = true;

	FOR(i,1,N){
		for(auto [p, ex] : fac[i]){
			if(mp.count(p) == 0){
				cout << -1 << endl;
				return 0;
			}
		}
	}

	map<ll, ll> _min;
	REP(i,N){
		for(auto [p, ex] : fac[i]){
			if(_min.count(p) == 0){
				_min[p] = ex;
			}else{
				_min[p] = min(_min[p], ex);
			}
		}
	}

	ll ans = 0;
	REP(i,N){
		for(auto [p, ex] : fac[i]){
			ans += ex - _min[p];
		}
	}

	cout << ans << endl;

	return 0;

}
