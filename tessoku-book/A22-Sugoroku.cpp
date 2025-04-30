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
	vector<int> A(N-1), B(N-1);
	REP(i,N-1) cin >> A[i];
	REP(i,N-1) cin >> B[i];

	vector<ll> dp(N+1, -1);
	dp[0] = 0;

	REP(i,N-1){
		if(dp[i] == -1) continue;
		dp[A[i]-1] = max(dp[i] + 100, dp[A[i]-1]);
		dp[B[i]-1] = max(dp[i] + 150, dp[B[i]-1]);
	}

	cout << dp[N-1] << endl;

	return 0;

}
