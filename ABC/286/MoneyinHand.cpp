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

	int N, X; cin >> N >> X;

	vector<int> A(N), B(N);
	REP(i,N) cin >> A[i] >> B[i];

	vector<int> coins;
	REP(i,N){
		REP(j,B[i]){
			coins.push_back(A[i]);
		}
	}

	int M = coins.size();

	vector< vector<bool> > dp(M+1, vector<bool>(X+1, false));
	dp[0][0] = true;

	FOR(i,1,M+1){
		REP(j,X+1){
			if(!dp[i-1][j]) continue;
			dp[i][j] = true;
			int now = j + coins[i-1];
			if(now >= X+1) continue;
			dp[i][now] = true;
		}
	}

	bool ans = dp[M][X];
	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
