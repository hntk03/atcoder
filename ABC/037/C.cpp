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

	int N,K; scanf("%d %d", &N, &K);
	int a[N];

	REP(i,N) scanf("%d", &a[i]);

	long long sum = 0;
	long long ans = 0;
	REP(i,K){
		sum += a[i];
	}
	ans += sum;

	FOR(i,1,N-K+1){
		sum -= a[i-1];
		sum += a[i+K-1];
		ans += sum;
	}


	printf("%lld\n", ans);


	return 0;

}
