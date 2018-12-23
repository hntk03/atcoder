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


	char c[4][4];

	REP(i,4){
		REP(j,4){
			scanf(" %c",&c[i][j]);
		}
	}

	for(int i=3;i>-1;--i){
		for(int j=3;j>-1;--j){
			printf("%c ",c[i][j]);
		}
	printf("\n");
	}

	return 0;

}
