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

	int N,M,C; scanf("%d %d %d", &N, &M, &C);

	int B[M];
	REP(i,M) scanf("%d", &B[i]);

	int ans = 0;
	REP(i,N){
		int point = C;
		int A;
		REP(j,M){ 
			scanf("%d", &A);
			point += A * B[j];
		}
		if(point > 0) ans++;

	}

	printf("%d\n", ans);

	return 0;

}
