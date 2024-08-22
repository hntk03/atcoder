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

map<ll, ll> prime_factorize(long long N) {
	map<ll, ll> res;
	for (long long a = 2; a * a <= N; ++a) {
		if (N % a != 0) continue;
		long long ex = 0; // 指数

		// 割れる限り割り続ける
		while (N % a == 0) {
			++ex;
			N /= a;
		}

		res[a] = ex;
	}

	// 最後に残った数について
	if (N != 1) res[N] = 1;
	return res;
}

ll f(ll n, ll p){
	if(n == 0) return 0;
	n /= p;
	return n + f(n, p);
}

int main(void){

	ll K; cin >> K;	

	map<ll, ll> ps = prime_factorize(K);

	ll ac = K, wa = 0;
	while(ac-wa > 1){
		ll wj = (ac+wa)/2;
		bool ok = true;
		for(auto [p, cnt] : ps){
			if(f(wj, p) < cnt) ok = false;
		}

		if(ok) ac = wj;
		else wa = wj;
	}

	cout << ac << endl;
	return 0;
}
