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

	int N; scanf("%d",&N);
	int a,b; scanf("%d %d", &a, &b);
	int K; scanf("%d", &K);
	int p[101]; REP(i,K) scanf("%d", &p[i]);

	int check[101] = {0};
	int flag = 0;
	check[a] = 1;
	check[b] = 1;
	REP(i,K){
		if(check[p[i]] == 0) check[p[i]] = 1;
		else flag = 1;
	}


	if(flag == 0) printf("YES\n");
	else printf("NO\n");


	return 0;

}
