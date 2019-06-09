#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const long long m = 1000000007;
 


int main(void){


	int N, M; cin >> N >> M;
	vector<int> a(M);
	vector<int> dp(N+1, 1<<30);
	dp[1] = 1;
	dp[2] = 1;
	REP(i,M){ 
		cin >> a[i];
		dp[a[i]] = -1;
	}

	long long ans = 0;

	FOR(i,3,N+1){
		if(dp[i] == -1 and dp[i-1] == -1){
			ans = 0;
			break;
		}if(dp[i] != -1 and dp[i-1] != -1){
			dp[i] = min(dp[i], dp[i-1]+1);
			ans = (ans+1)%m;
			ans++;
		}if(dp[i] != -1 and dp[i-2] != -1){
			dp[i] = min(dp[i], dp[i-2]+1);
			ans = (ans+1)%m;
		}
	}

	cout << ans << endl;

	return 0;

}
