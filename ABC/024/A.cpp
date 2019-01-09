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

	int A,B,C,K; scanf("%d %d %d %d", &A, &B, &C, &K);
	int S,T; scanf("%d %d", &S, &T);

	int ans = 0;
	if(S+T<K)
		ans = A*S + B*T;
	else{
		ans = (A-C)*S + (B-C)*T;
	}

	printf("%d\n", ans);

	return 0;

}
