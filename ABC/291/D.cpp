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

	int N; cin >> N;	
	vector<int> A(N), B(N);
	REP(i,N) cin >> A[i] >> B[i];

	vector<vector<mint>> dp(N, vector<mint>(2, 0));

	dp[0][0] = dp[0][1] = 1;

	FOR(i,1,N){
		REP(j,2){
			int now = j == 0?A[i]:B[i];
			dp[i][j] = (A[i-1] == now ? 0 : dp[i-1][0]) + (B[i-1] == now ? 0 :dp[i-1][1]);
		}
	}

	mint ans = dp[N-1][0] + dp[N-1][1];
	cout << ans.val() << endl;

	return 0;

}
