#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const ll INF = 1e18;

int main(void){

	ll N; cin >> N;

	ll ans = INF;
	for(ll i=1;i*i<=N;++i){
		if(N % i == 0){
			ll j = N / i;
			ans = min(ans, i+j-2);
		}
	}

	cout << ans << endl;


	return 0;

}
