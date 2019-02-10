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
	int A,B; scanf("%d %d", &A, &B);

	int p;
	int count[3] = {0};
	REP(i,N){
		scanf("%d", &p);
		if(p <= A) count[0]++;
		else if(p > A && p <= B) count[1]++;
		else count[2]++;
}
	
	printf("%d\n",min(count[0],min(count[1],count[2])));

	return 0;

}
