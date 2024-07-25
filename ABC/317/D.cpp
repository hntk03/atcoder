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

const ll INF = 1e18;

void chmin(ll& x, ll y){ x = min(x, y); }

int main(void){

	int N; cin >> N;
	int W = 0;

	vector<pair<int, int>> data;
	REP(i,N){
		int X, Y, Z;  cin >> X >> Y >> Z;
		int a = max(0, (Y - X + 1) / 2);
		W += Z;
		data.push_back(make_pair(a, Z*2));
	}

	vector<vector<ll>> dp(N+1, vector<ll>(W+1, INF));
	dp[0][0] = 0;

	REP(i,N){
		auto [a, z] = data[i];
		REP(j,W+1){
			chmin(dp[i+1][j], dp[i][j]);
			chmin(dp[i+1][min(W, j+z)], dp[i][j]+a);
		}
	}

	ll ans = dp[N][W];
	cout << ans << endl;

	return 0;

}
