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

	int ans = 0;
	REP(i,N){
		if(i%2 == 0) ans++;
	}

	if(ans >= K) printf("YES\n");
	else printf("NO\n");

	return 0;

}
