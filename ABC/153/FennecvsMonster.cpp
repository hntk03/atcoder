#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	
	ll N, K; cin >> N >> K;
	vector<ll> H(N);
	REP(i,N) cin >> H[i];

	SORT(H);

	ll ans = 0;
	REP(i,N-K){
		ans += H[i];
	}

	cout << ans << endl;

	return 0;

}
