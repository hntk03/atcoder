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

ll ans = INF; 

void chmin(int & x, int y){
	x = min(x, y);
}

int main(void){

	string T; cin >> T;
	int N; cin >> N;
	int M = T.size();

	vector<vector<int> > dp(N+1, vector<int>(M+1, INF));
	dp[0][0] = 0;

	REP(i,N){
		int A; cin >> A;
		REP(j,M+1) dp[i+1][j] = dp[i][j];

		REP(Ai, A){
			string S; cin >> S;
			REP(j,M+1){
				if(j+S.size() > M) continue;
				bool ok = true;
				REP(k, S.size()){
					if(T[j+k] != S[k]) ok = false;
				}
				if(ok) chmin(dp[i+1][j+S.size()], dp[i][j]+1);
			}
		}
	}

	int ans = dp[N][M];
	if(ans == INF) ans = -1;
	cout << ans << endl;
	
	return 0;

}
