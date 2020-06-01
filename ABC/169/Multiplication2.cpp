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

	int N; cin >> N;
	ll ans = 1;

	REP(i,N){
		ll A; cin >> A;
		if(A == 0){
			cout << 0 << endl;
			return 0;
		}
		ans *= A;
		ans = min(ans, 1000000000000000001LL);

	}

	if(ans == 1000000000000000001LL) ans = -1;
	
	cout << ans << endl;


	return 0;

}
