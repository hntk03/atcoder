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

const ll INF = 1e18;

int main(void){

	int X, Y, Z; cin >> X >> Y >> Z;
	string S; cin >> S;
	int N = S.size();

	vector<vector<ll>> dp(N+1, vector<ll>(2, INF));

	dp[0][0] = 0;
	REP(i,N){
		REP(c,2){
			int a = S[i] == 'A';
			REP(nc,2){
				ll cost = (a == nc)? X : Y;
				if(c != nc) cost += Z;
				dp[i+1][nc] = min(dp[i+1][nc], dp[i][c]+cost);

			}
		}
	}

	cout << min(dp[N][0], dp[N][1]) << endl;

	return 0;

}
