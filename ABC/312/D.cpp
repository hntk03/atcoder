#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

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

	vector<vector<mint>> dp(N+1, vector<mint>(N+1));
	dp[0][0] = 1;

	REP(i,N){
		REP(j,N){
			if(S[i] != ')') dp[i+1][j+1] += dp[i][j];
			if(S[i] != '(' and j > 0) dp[i+1][j-1] += dp[i][j];
		}
	}

	cout << dp[N][0].val() << endl;

	return 0;

}
