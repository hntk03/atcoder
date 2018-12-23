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

	int T,N,M;
	int a[100];
	int b[100];

	scanf("%d", &T);
	scanf("%d", &N);
	REP(i,N) scanf("%d", &a[i]);
	scanf("%d", &M);
	REP(i,M) scanf("%d", &b[i]);


	printf("yes\n");
	return 0;
	

}
