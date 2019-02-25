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

#define B 380000


int main(void){

	int N; scanf("%d", &N);

	double ans = 0.0;
	REP(i,N){
		double x; 
		char u[4];
		scanf("%lf %s", &x, u);

		if(strcmp(u,"JPY") == 0) ans += x;
		else{
			ans += x* B;
		}
	}

	printf("%f\n",ans);

	return 0;

}
