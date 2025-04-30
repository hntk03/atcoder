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
	vector<int> P(N+1), A(N+1);
	REP(i,N) cin >> P[i+1] >> A[i+1];

	vector<vector<int>> dp(N+2, vector<int>(N+2));
	dp[1][N] = 0;
	for(int len = N - 2; len >= 0; len--){
		for(int l = 1; l <= N - len; l++){
			int r = l + len;

			int score1 = 0;
			if(l <= P[l-1] and P[l-1] <= r) score1 = A[l-1];

			int score2 = 0;
			if(l <= P[r+1] and P[r+1] <= r) score2 = A[r+1];

			if(l == 1) dp[l][r] = dp[l][r+1] + score2;
			else if(r == N) dp[l][r] = dp[l-1][r] + score1;
			else dp[l][r] = max(dp[l-1][r] + score1, dp[l][r+1] + score2);
		}
	}

	int ans = 0;
	for(int i = 1; i <= N; i++) ans = max(ans, dp[i][i]);
	cout << ans << endl;

	return 0;

}
