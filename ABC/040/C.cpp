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

#define N_MAX 100001

int dp[N_MAX];


int main(void){

	int N; scanf("%d", &N);

	int a[N] = {0};
	REP(i,N) scanf("%d", &a[i]);

	dp[0] = 0;

	dp[1] = dp[1] + abs(a[1] - a[0]);

	FOR(i,2,N){

		int x = dp[i-2]	+ abs(a[i]-a[i-2]);
		int y = dp[i-1]	+ abs(a[i]-a[i-1]);
		dp[i] = min(x, y);
	}


	printf("%d\n", dp[N-1]);


	return 0;

}
