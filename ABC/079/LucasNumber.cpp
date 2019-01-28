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

	int N; scanf("%d", &N);

	long long int l[87] = {0};
	l[0] = 2;
	l[1] = 1;

	FOR(i,2,N+1){
		l[i] = l[i-1] + l[i-2];
	}
	
	printf("%lld\n",l[N]);


	return 0;

}
