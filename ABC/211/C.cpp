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

	string S; cin >> S;	

	int N = S.size();
	vector<vector<int> > dp(N+1, vector<int>(9));

	REP(i,N+1) dp[i][0] = 1;

	const int mod = 1e9+7;
	string T = "chokudai";

	REP(i,N){
		REP(j,8){
			if(S[i] != T[j]){
				dp[i+1][j+1] = dp[i][j+1];
			}else{
				dp[i+1][j+1] = (dp[i][j+1] + dp[i][j]) % mod;
			}
		}
	}

	cout << dp[N][8] << endl;

	return 0;

}
