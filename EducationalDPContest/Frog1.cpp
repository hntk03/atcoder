#include <stdio.h>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

#define NMAX 1000000
#define HMAX 100000

int N;
int h[NMAX];
int dp[NMAX][HMAX];


int dfs(int i, int cost){

	int res = 0;
	if(dp[i][cost] != -1){
		return dp[i][cost];
	}
	if(i == N) return 0;
	else{
		int res1 = dfs(i+1, abs(h[i+1]-h[i]));
		int res2 = dfs(i+2, abs(h[i+2]-h[i]));
		res = min(res1,res2) + cost;
	}

	return res;

}


int main(void){

	scanf("%d", &N);
	REP(i,N)	scanf("%d", &h[i]);

	memset(dp, -1,sizeof(dp));

	printf("%d\n", dfs(0,0));



	return 0;

}
