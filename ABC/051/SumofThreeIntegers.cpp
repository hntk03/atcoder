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

	int K,S; scanf("%d %d", &K, &S);

	int ans = 0;
	REP(x,K+1){
		REP(y,K+1){
			int z = S - ( x + y );
			if(0 <= z and z <= K) ans++;
		}
	}

	
	printf("%d\n", ans);

	return 0;

}
