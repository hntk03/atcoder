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
	vector<int> A(N), B(N);

	FOR(i,1,N) cin >> A[i];
	FOR(i,2,N) cin >> B[i];
	
	vector<int> dp(N, INF);
	dp[0] = 0;
	FOR(i,1,N){
		dp[i] = min(dp[i-1] + A[i], dp[i]);
		if(i > 1) dp[i] = min(dp[i-2]+B[i], dp[i]);
	}

	cout << dp[N-1] << endl;
	return 0;

}
