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

	int N, S; cin >> N >> S;
	vector<int> A(N);
	REP(i,N) cin >> A[i];

	vector<vector<bool>> dp(N+1, vector<bool>(S+1));

	dp[0][0] = true;

	REP(i,N){
		REP(j,S+1){
			if(dp[i][j]) dp[i+1][j] = true;

			if(dp[i][j] and j + A[i] <= S) dp[i+1][j+A[i]] = true;
		}
	}
	
	cout << (dp[N][S]?"Yes":"No")<< endl;
	return 0;

}
