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

void chmin(int &a, int b){ a = min(a, b); }

void solve(){
	int N; cin >> N;
	string S; cin >> S;

	vector<vector<int>> dp(N+1, vector<int>(3, INF));

	dp[0][0] = 0;
	REP(i,N){
		REP(j,3){
			int cost = ((S[i] - '0') == (j%2)) ? 0: 1;
			REP(pj, j+1) chmin(dp[i+1][j], dp[i][pj] + cost);
		}
	}

	int ans = *min_element(dp[N].begin(), dp[N].end());
	cout << ans << endl;
}

int main(){

	int T; cin >> T;

	REP(i,T){
		solve();
	}

	return 0;
}
