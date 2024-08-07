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
	string S; cin >> S;

	const int INF = 1001001001;
	vector<vector<int>> dp(N+1, vector<int>(3, -INF));

	REP(i,3) dp[0][i] = 0;

	FOR(i,1,N+1){
		int x = 0;
		if(S[i-1] == 'R') x = 0;
		if(S[i-1] == 'P') x = 1;
		if(S[i-1] == 'S') x = 2;

		REP(j,3){
			int val = 0;
			if(j == (x+1)%3) val = 1;
			if(j == (x+2)%3) continue;
			REP(pj,3){
				if(j == pj) continue;
				dp[i][j] = max(dp[i][j], dp[i-1][pj]+val);
			}
		}
	}

	int ans = max({dp[N][0], dp[N][1], dp[N][2]});
	cout << ans << endl;

	return 0;

}
