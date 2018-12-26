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

int n,k; 
int t[5][5];

bool dfs(int numQ, int value){
	if(numQ == n) return (value == 0);
	REP(i,k){
		if(dfs(numQ+1, value^t[numQ][i])) return true;
	}

	return false;


}


int main(void){

	scanf("%d %d", &n, &k);
	REP(i,n) REP(j,k) scanf("%d", &t[i][j]);

	bool flag = dfs(0,0);

	if(flag) printf("Found\n");
	else printf("Nothing\n");



	



	return 0;

}
