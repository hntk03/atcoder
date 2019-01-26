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
	int x[100];
	int y[100];

	REP(i,N){
		scanf("%d %d", &x[i], &y[i]);
	}

	int s_x,s_y;
	double ans = -1.0;
	// FOR(i,1,N){
	REP(i,N){
		s_x = x[i];
		s_y = y[i];
		FOR(j,i+1,N){
			double r = sqrt(pow(s_x-x[j],2) + pow(s_y-y[j],2));
			ans = max(r,ans);
		}
	}
	

	printf("%f\n",ans);

	return 0;

}
