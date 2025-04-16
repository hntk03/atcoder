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

	string S, T; cin >> S >> T;
	int N = S.size();
	int M = T.size();

	vector<vector<int>> dp(N+1, vector<int>(M+1));
	dp[0][0] = 0;
	REP(i,N+1){
		REP(j,M+1){
			if(i >= 1 and j >= 1 and S[i-1] == T[j-1]){
				dp[i][j] = max({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]+1});
			}else if (i >= 1 and j >= 1){
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}else if(i >= 1){
				dp[i][j] = dp[i-1][j];
			}else if(j >= 1){
				dp[i][j] = dp[i][j-1];
			}
		}
	}
	
	cout << dp[N][M] << endl;
	return 0;

}
