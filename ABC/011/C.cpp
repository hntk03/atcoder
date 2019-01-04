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
#define N_MAX = 300

int ng[NUM];
bool flag = false;
int dp[N_MAX+1][N_MAX+1];

void dfs(int n,int count){

	// printf("func:%d\n",n);
	if(count > 99 || n < 0){
		return ;
	}
	if(n == 0){
		flag = true;
		// return ;
	}else if(n == ng[0] || n == ng[1] || n == ng[2]){
		return ;
	}

	dfs(n-1,count+1);
	dfs(n-2,count+1);
	dfs(n-3,count+1);

}

int main(void){

	memset(dp, -1, sizeof(dp));

	int n; scanf("%d ", &n);

	REP(i,NUM) scanf("%d", &ng[i]);

	dfs(n,0);
	if(flag == true)
		printf("YES\n");
	else
		printf("NO\n");


	return 0;

}
