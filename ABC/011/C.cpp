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

#define NUM 3
#define NMAX 300
#define INF 100000000

int dp[NMAX];
int ng[NUM];


int main(void){

	memset(dp, INF, sizeof(dp));

	int n; scanf("%d ", &n);
	dp[n] = 0;


	REP(i,NUM) scanf("%d", &ng[i]);

	for(int i=n;i>=0;--i){
		if(ng[])

	}


	printf("YES\n");
	printf("NO\n");


	return 0;

}
