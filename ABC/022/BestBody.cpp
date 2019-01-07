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

	int N,S,T; scanf("%d %d %d", &N, &S, &T);
	int W; scanf("%d", &W);

	int ans = 0;
	if(W >= S && W <= T) ans++;
	int A;
	REP(i,N-1){
		scanf("%d", &A);
		W += A;
		if(W >= S && W <= T) ans++;

	}

	printf("%d\n", ans); 
	return 0;

}
