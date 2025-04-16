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

	int N, W; cin >> N >> W;
	vector<int> w(N), v(N);
	REP(i,N) cin >> w[i] >> v[i];

	vector<vector<ll>> dp(N+1, vector<ll>(W+1, -INF));
	dp[0][0] = 0;
	REP(i,N){
		REP(j,W+1){
			// 選ばない場合
			dp[i+1][j] = max(dp[i][j], dp[i+1][j]);

			// 選んだ場合
			if(dp[i][j] != -INF and j + w[i] <= W){
				dp[i+1][j+w[i]] = max(dp[i+1][j+w[i]], dp[i][j] + v[i]);
			}
		}
	}

	ll ans = -INF;
	REP(i,W+1){
		ans = max(ans, dp[N][i]);
	}

	cout << ans << endl;
	return 0;

}
