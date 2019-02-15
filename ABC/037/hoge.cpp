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
	long long r;
	for(int i=0;i<(N-K+1);++i){
		r = 0;
		for(int j=i;j<(i+K);++j){
			r += a[j];
		}
		sum += r;
	}


	printf("%lld\n", sum);
	return 0;

}
