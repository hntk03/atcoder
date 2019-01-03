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
#define P_MAX 10000



int N;
int p[100];
int ans = 0;

int dp[N_MAX][P_MAX];

int rec(int i,int point){
	
	if(dp[i][point] != -1){
		return ;
	}
	if(i == N && dp[i][point] == -1){
		dp[i][point] = point;
		ans++;
		return ;
	}else{
		dp[i][p[i]+point] = p[i]+point;
		dp[i][point] = point;

		rec(i+1,p[i]+point);
		rec(i+1,point);
	}
}


int main(void){

	memset(dp, -1, sizeof(dp));

	scanf("%d", &N);
	REP(i,N) scanf("%d", &p[i]);

	rec(0,0);
	printf("%d\n", ans);



	return 0;

}
