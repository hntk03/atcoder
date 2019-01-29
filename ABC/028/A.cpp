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

	int N; scanf("%d",&N);

	if(N < 60) printf("Bad\n");
	else if(N < 90) printf("Good\n");
	else if(N < 100) printf("Great\n");
	else printf("Perfect\n");


	return 0;

}
