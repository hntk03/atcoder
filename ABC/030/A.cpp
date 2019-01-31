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

	int A,B,C,D; scanf("%d %d %d %d", &A, &B, &C, &D);
	double p1 = (double)B/A;
	double p2 = (double)D/C;

	if(p1>p2) printf("TAKAHASHI\n");
	else if(p2>p1) printf("AOKI\n");
	else printf("DRAW\n");


	return 0;

}
