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

	ll A, K; cin >> A >> K;
	ll target = 2 * (ll)pow(10, 12);
	
	if(K == 0){
		printf("%lld\n", target - A);
	}else{
		ll now = A;
		ll ans = 0;
		while(now < target){
			now += 1 + K * now;
			ans++;
		}
		printf("%lld\n", ans);
	}

	return 0;

}
