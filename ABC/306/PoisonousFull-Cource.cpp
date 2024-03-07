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

void chmax(ll &x, ll y){ 
	x = max(x, y); 
}

int main(void){

	int N; cin >> N;
	vector<int> X(N), Y(N);

	REP(i,N) cin >> X[i] >> Y[i];

	const ll INF = 1e18;
	vector<vector<ll> > dp(N+1, vector<ll>(2, -INF));
	dp[0][0] = 0;

	REP(i,N){
		chmax(dp[i+1][0], dp[i][0]);
		chmax(dp[i+1][1], dp[i][1]);

		if(X[i] == 0){
			chmax(dp[i+1][0], dp[i][0]+Y[i]);
			chmax(dp[i+1][0], dp[i][1]+Y[i]);
		}else{
			chmax(dp[i+1][1], dp[i][0]+Y[i]);
		}

	}

	ll ans = max(dp[N][0], dp[N][1]);
	cout << ans << endl;

	return 0;

}
