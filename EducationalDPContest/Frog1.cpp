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



int main(void){

	int N; cin >> N;
	vector<int> h(N,0);
	REP(i,N){
		cin >> h[i];
	}
	vector<int> dp(N, 0);

	dp[0] = 0;
	dp[1] = abs(h[1] - h[0]);

	FOR(i,2,N){
		int a = dp[i-1] + abs(h[i-1] - h[i]);
		int b = dp[i-2] + abs(h[i-2] - h[i]);
		dp[i] = min(a, b);
	}

	cout << dp[N-1] << endl;

	return 0;

}
