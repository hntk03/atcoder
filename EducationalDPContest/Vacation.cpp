#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	int N; cin >> N;
	vector<vector<int>> a(N, vector<int>(3));

	REP(i,N) cin >> a[i][0] >> a[i][1] >> a[i][2];
	
	vector<vector<int>> dp(N+1,vector<int>(3, 0));
	
	REP(i,N){
		REP(j,3){
			REP(k,3){
				if(j == k) continue;
				dp[i+1][k] = max(dp[i+1][k], dp[i][j]+a[i][k]);
			}
		}
	}


	int ans = -1;
	REP(i,3){
		ans = max(ans, dp[N][i]);
	}

	cout << ans << endl;

	return 0;

}
