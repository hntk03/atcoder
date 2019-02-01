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

	int L,H; scanf("%d %d",&L, &H);
	int N; scanf("%d", &N);

	int A[51];
	REP(i,N) scanf("%d", &A[i]);

	REP(i,N){
		if(A[i] > H) printf("-1\n");
		else if(A[i] < L) printf("%d\n", L - A[i]);
		else printf("0\n");

	}


	return 0;

}
