#include <stdio.h>
#include <cmath>
#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int MAX = 1 << 30;


int main(void){

	int N, K; cin >> N >> K;
	vector<int> h(N,0);
	REP(i,N){
		cin >> h[i];
	}
	vector<int> dp(N, 0);

	dp[0] = 0;

	FOR(i,1,N+1){
		int m = 1 << 30;
		FOR(j,1,K+1){
			if(i-j >= 0){
				m = min(dp[i-j] + abs(h[i-j] - h[i]), m);
			}
			dp[i] = m;
		}
	}

	cout << dp[N-1] << endl;

	return 0;

}
