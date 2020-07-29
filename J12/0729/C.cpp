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
const int MOD = 1e9+7;

vector<pair<long long, long long> > prime_factorize(long long N) {
	vector<pair<long long, long long> > res;
	for (long long a = 2; a * a <= N; ++a) {
		if (N % a != 0) continue;
		long long ex = 0;
		while (N % a == 0) {
			++ex;
			N /= a;
		}
		res.push_back({a, ex});
	}
	if (N != 1) res.push_back({N, 1});
	return res;
}


int main(void){

	int N; cin >> N;

	map<ll, ll> mp;
	FOR(i,1,N+1){
		auto pf = prime_factorize(i);
		for(auto p: pf){
			mp[p.first] += p.second;
		}
	}

	ll ans = 1;
	for(auto p : mp){
		ans *= (p.second+1);
		ans %= MOD;
	}

	cout << ans << endl;

	return 0;

}
