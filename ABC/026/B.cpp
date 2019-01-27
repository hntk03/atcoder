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
	int R[1000];
	REP(i,N) scanf("%d", &R[i]);
	sort(R,R+N);

	double ans = 0.0;
	int c = 0;
	for(int i=N-1;i>=0;--i){
		if(c %2 == 0)
			ans += R[i]*R[i];
		else
			ans -= R[i]*R[i];

		c++;

	}

	printf("%f\n", ans*M_PI);
	return 0;

}
