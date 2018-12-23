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

	int N,K;
	scanf("%d %d", &N, &K);

	int r[N];

	REP(i,N) scanf("%d", &r[i]);
	REP(i,N) printf("%d\n",r[i]);

	sort(r,r+N);
	double c = 0.0;
	for(int i=N-K;i<N;++i){
		c = (c + r[i])/2.0;
	}

	printf("%f\n",c);



	return 0;

}
