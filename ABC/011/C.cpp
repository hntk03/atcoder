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
	vector<int> NG(3);
	REP(i,3) cin >> NG[i];
	vector<int> dp(N+5);
	REP(i,N+5) dp[i] = INF;
	dp[N] = 0;

	for(int i=N-1;i>=0;--i){
		dp[i] = min({dp[i], dp[i+1]+1, dp[i+2]+1, dp[i+3]+1});
	}

	bool flag = true;
	REP(i,3){ 
		if(dp[NG[i]] != INF) flag = false;
	}
	if(dp[0] == INF) flag = false;

	cout << (flag ? "YES" : "NO") << endl;
	return 0;

}
