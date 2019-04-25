#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int MAX = 100010;
const int INF = 1 << 30;

vector<int> dp(MAX, INF);

int main(void){

	int N; cin >> N;
	dp[0] = 0;

	FOR(n,1,N+1){
		dp[n] = min(dp[n], 1+dp[n-1]);

		int power = 6;
		while(power <= n){
			if(n-power >= 0) dp[n] = min(dp[n], dp[n-power]+1);

			power *= 6;

		}
		power = 9;
		while(power <= n){
			if(n-power >= 0) dp[n] = min(dp[n], dp[n-power]+1);
			power *= 9;
		}

	}

	cout << dp[N] << endl;


	return 0;

}
