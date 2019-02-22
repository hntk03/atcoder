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

#define D 100000007


int main(void){

	int A,B,C; scanf("%d %d %d", &A, &B, &C);

	long long ans = (long long)(A*B)%D;
	ans = (ans * C) % D;
	
	
	printf("%lld\n", ans);


	return 0;

}
