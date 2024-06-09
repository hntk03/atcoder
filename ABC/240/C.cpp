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
	vector<int> a(N), b(N);
	REP(i,N) cin >> a[i] >> b[i];

	vector<vector<bool> > dp(N+1, vector<bool>(X+1, false));

	dp[0][0] = true;

  FOR(i,1,N+1){
		REP(j,X+1){
			if(!dp[i-1][j]) continue;
			int xa = j + a[i-1];
			if(xa > X) continue;
			dp[i][xa] = true;

			int xb = j + b[i-1];
			if(xb > X) continue;
			dp[i][xb] = true;
		}
	}

	if(dp[N][X]) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
