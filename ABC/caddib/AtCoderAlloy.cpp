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
	long long int H,W;
	long long int A,B;
	scanf("%d %lld %lld", &N, &H, &W);

	int ans = 0;
	REP(i,N){
		scanf("%lld %lld", &A, &B);
		if(H<=A && W<=B) ans++;

	}

	printf("%d\n",ans);

	return 0;

}
