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

	const int M = 1e6;
	vector<bool> isPrime(M+1, true);
	vector<int> primes;
	isPrime[0] = isPrime[1] = false;

	for(int i=2; i<=M; i++){
		if(!isPrime[i]) continue;
		primes.push_back(i);
		for(ll j=(ll)i*i; j<=M; j+=i){
			isPrime[j] = false;
		}
	}

	vector<int> s(M+1);
		for(int p : primes) s[p] = 1;
	REP(i,M) s[i+1] += s[i];

	ll N; cin >> N;
	ll ans = 0;
	for(int q : primes){
		int r = min<ll>(N/q/q/q, q-1);
		ans += s[r];
	}

	cout << ans << endl;

	return 0;

}
