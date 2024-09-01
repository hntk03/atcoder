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

const int INF = 1e18;

void chmax(ll &x, ll y) { x = max(x, y); }

int main(void){

	int N; cin >> N;
	vector<ll> A(N);
	for(ll &a : A) cin >> a;



	vector<vector<ll>> dp(N+1, vector<ll>(2, -INF));
	dp[0][0] = 0;

	REP(i,N){
		int ni = i+1;
		REP(j,2){
			{
				// 倒す
				int nj = j^1;
				int X = (j%2) ? A[i]*2 : A[i];
				chmax(dp[ni][nj], dp[i][j]+X);
			}
			{
				// 倒さない 
				int nj = j;
				chmax(dp[ni][nj], dp[i][j]);
			}
		}
	}

	ll ans = max(dp[N][0], dp[N][1]);
	cout << ans << endl;

	return 0;

}
