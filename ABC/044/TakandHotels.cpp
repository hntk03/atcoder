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

	int N, K, X, Y;
	scanf("%d %d %d %d", &N, &K, &X, &Y);

	int ans = 0;
	if(N > K){
		ans += K*X + (N-K)*Y;
	}else{
		ans = N*X;
	}

	printf("%d\n", ans);

	return 0;

}
