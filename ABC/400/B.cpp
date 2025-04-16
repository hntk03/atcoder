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

	int N, M; cin >> N >> M;

	ll ans = 0;
	bool ok = true;
	REP(i,M+1){
		ll now = 1;
		REP(j,i){
			now *= N;
			if(now > 1e9) ok = false;
		}
		ans += now;
		if(ans > 1e9) ok = false;
	}
	
	if(ok) cout << ans << endl;
	else cout << "inf" << endl;

	return 0;

}
