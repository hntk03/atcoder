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

ll dp[105][105][100];

void chmax(ll& a, ll b){
	a = max(a, b);
}

int main(void){

	int N, K, D; cin >> N >> K >> D;

	vector<int> a(N);
	REP(i,N) cin >> a[i];

	REP(i,N+1) REP(j,K+1) REP(r,D) dp[i][j][r] = -1;

	dp[0][0][0] = 0;
	REP(i,N){
		int ni = i+1;
		REP(j,K+1){
			REP(r,D){
			ll now = dp[i][j][r];
			if(now == -1) continue;
				{ // use
					int nj = j+1, nr = (r+a[i])%D;
					chmax(dp[ni][nj][nr], now+a[i]);
				}

				{ // not use
					int nj = j, nr = r;
					chmax(dp[ni][nj][nr], now);
				}
			}
		}
	}

	cout << dp[N][K][0] << endl;
	return 0;

}
