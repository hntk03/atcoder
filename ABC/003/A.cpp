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

	double ans = 0.0;
	double p = 1.0/N;
	FOR(i,1,N+1) ans += i*10000*p;

	printf("%d\n",(int)ans);

	return 0;

}
