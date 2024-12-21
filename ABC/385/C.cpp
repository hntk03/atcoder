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
	vector<int> H(N);
	REP(i,N) cin >> H[i];

	vector<vector<int>> dp(N, vector<int>(N, 0));
	REP(i,N) dp[0][i] = 1;

	REP(i,N){
		FOR(j,1,N){
			int cnt = i+1;
			if(j - cnt < 0){
				dp[i][j] = 1;
			}else{
				if(H[j] == H[j-cnt]){
					dp[i][j] = dp[i][j-cnt]+1;
				}else{
					dp[i][j] = 1;
				}
			}
		}
	}
	int ans = 0;

	REP(i,N){
		REP(j,N){
			ans = max(ans, dp[i][j]);
		}
	}

	cout << ans << endl;
	return 0;

}
