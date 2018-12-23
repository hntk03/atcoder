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
	
	int N;
	scanf("%d", &N);

	int ans = 100000;
	int t;
	REP(i,N){
		scanf("%d", &t);
		ans = min(ans,t);
	}
	
	printf("%d\n",ans);


	return 0;

}
