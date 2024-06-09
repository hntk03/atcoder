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

const int mod = 998244353;

int main(void){

	int N, M, K; cin >> N >> M >> K;
	vector<vector<int> > dp(N+1, vector<int>(K+1, 0));

	dp[0][0] = 1;

	FOR(x,1,N+1){
		REP(y,K+1){
			int now = 0;
			FOR(i,1,M+1){
				if(y-i >= 0){
					now += dp[x-1][y-i];
					now %= mod;
				}
			}
			dp[x][y] = now;
		}
	}

	int ans = 0;
	REP(y,K+1){
		ans += dp[N][y];
		ans %= mod;
	}

	cout << ans << endl;

	return 0;

}
