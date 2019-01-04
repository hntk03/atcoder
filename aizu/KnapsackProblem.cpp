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

#define N_MAX 101
#define W_MAX 100001


int N,W;
int v[1000];
int w[1000];

int dp[N_MAX][W_MAX];

int	search(int i, int wight){

		int res;

	if(dp[i][wight] != -1) return dp[i][wight];
	if(i == N) return 0;
	else if(w[i] > wight) return search(i+1, wight);
	else{

		res = max(search(i+1,wight-w[i])+v[i], search(i+1,wight));
		
	}
				

	return res;

}

int main(void){

	memset(dp, -1, sizeof(dp));

	scanf("%d %d", &N, &W);
	REP(i,N) scanf("%d %d", &v[i], &w[i]);

	int res = search(0,W);

	printf("%d\n", res);

	return 0;

}
