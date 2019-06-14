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
	vector<int> dp(N+1,0);
	dp[1] = 1;
	REP(i,M){ 
		cin >> a[i];
	}


	FOR(i,2,N+1){
		if(a[i] == i) dp[i] = 0;
		dp[i] = (dp[i-1] + dp[i-2]) % m;
	}

	cout << dp[N] << endl;

	return 0;

}
