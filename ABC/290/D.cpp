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

void solve(){
	int N, D, K; cin >> N >> D >> K;
	K--;

	int g = gcd(N, D);
	int m = N/g, e = D/g;
	int b = (ll)K*e%m;
	int i = K/m;
	int ans = b*g+i;
	cout << ans << endl;

}

int main(void){

	int T; cin >> T;

	REP(ti,T){
		solve();
	}

	return 0;

}
