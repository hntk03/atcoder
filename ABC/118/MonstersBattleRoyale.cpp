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

int gcd(int a, int b){

	if(b < a){
		int tmp = a;
		a = b;
		b = a;
	}

	if(a == 0) return b;
	else return gcd(b%a,a);

}


int main(void){

	int N; scanf("%d", &N);

	int A[N];
	REP(i,N){ 
		scanf("%d", &A[i]);
	}

	int ans = A[0];
	FOR(i,1,N){
		ans = gcd(ans,A[i]);
	}

	printf("%d\n", ans);

	return 0;

}
