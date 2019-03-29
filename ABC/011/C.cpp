#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1 << 30;


int main(void){


	int N; cin >> N;
	vector<bool> NG(N, false);
	REP(i,3){
		int x; cin >> x;
		NG[x] = true;
	}
	vector<int> dp(N+1, INF);
	dp[N] = 0;

	for(int i=N;i>=0;--i){
		if(NG[i]) continue;
		FOR(j,1,3+1){
			if(i-j >= 0){
				dp[i-j] = min(dp[i]+1, dp[i-j]);
			}
		}
	}

	if(dp[0] <= 100) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;

}
