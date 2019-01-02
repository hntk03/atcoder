#include <stdio.h>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	int A,B,C; scanf("%d %d %d", &A, &B, &C);	
	int ans = 0;

	if(A+B == C && A-B != C) printf("+\n");
	if(A+B != C && A-B == C) printf("-\n");
	if(A+B != C && A-B != C) printf("!\n");
	if(A+B == C && A-B == C) printf("?\n");



	return 0;

}
