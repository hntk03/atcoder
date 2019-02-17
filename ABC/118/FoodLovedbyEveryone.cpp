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

	int N,M; scanf("%d %d",&N, &M);
	int K;
	int like[M] = {0};

	REP(i,N){
		scanf("%d", &K);

		int A;
		REP(j,K){
			scanf("%d",&A);
			like[A-1]++;
		}
	}

	int ans = 0;
	REP(i,M){
		if(like[i] == N) ans++;
	}

	printf("%d\n",ans);

	return 0;

}
