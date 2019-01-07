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

	int N; scanf("%d", &N);

	int cnt[100000] = {0};
	int A;
	int ans = 0;
	REP(i,N){
		scanf("%d",&A);
		if(cnt[A-1] == 1) ans++;
		else cnt[A-1] = 1;
	}

	printf("%d\n", ans);

	return 0;

}
