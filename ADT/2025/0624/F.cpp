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
	vector<vector<bool>> dp(N+1, vector<bool>(X+1));
	dp[0][0] = true;

	REP(i,N){
		int a, b; cin >> a >> b;
		REP(j,X+1){
			if(dp[i][j] and j+a <= X) dp[i+1][j+a] = true;
			if(dp[i][j] and j+b <= X) dp[i+1][j+b] = true;
		}
	}
	
	cout << (dp[N][X]?"Yes":"No") << endl;
	return 0;

}
