#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){

	int N, M; cin >> N >> M;
	vector<bool> broken(N+1, false);
	REP(i,M){
		int a; cin >> a;
		broken[a] = true;
	}

	vector<int> dp(N+2);
	const int mod = 1000000007;
	dp[N] = 1;
	for(int i=N-1;i >= 0; i--){
		if(broken[i]){
			dp[i] = 0;
			continue;
		}
		dp[i] = (dp[i+1] + dp[i+2]) % mod;
	}
	
	cout << dp[0] << endl;


	return 0;

}
