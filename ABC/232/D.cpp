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

	int H, W; cin >> H >> W;

	vector<string> C(H);
	REP(i,H) cin >> C[i];

	vector<vector<int>> dp(H, vector<int>(W, 0));

	for(int i=H-1;i>=0;i--){
		for(int j=W-1;j>=0;j--){
			if(C[i][j] == '#') continue;
			dp[i][j] = 1;
			if(i+1 < H) dp[i][j] = max(dp[i][j], dp[i+1][j]+1);
			if(j+1 < W) dp[i][j] = max(dp[i][j], dp[i][j+1]+1);

		}
	}

	cout << dp[0][0] << endl;

	return 0;

}
