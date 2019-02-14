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

	int N,Q;
	scanf("%d %d", &N, &Q);
	int a[N] = {0};
	
	REP(i,Q){
		int l,r,t; scanf("%d %d %d", &l, &r, &t);
		FOR(j,l-1,r){
			a[j] = t;
		}
	}

	REP(i,N) printf("%d\n", a[i]);

	return 0;

}
