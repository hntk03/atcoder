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

	int n;
	scanf("%d", &n);

	int c[100];
	REP(i,n) scanf("%d", &c[i]);

	int n_=1;
	int _n=n;
	while(_n>0) n_*= _n--;
	printf("%d\n",n_);


	REP(i,n){


	}


	return 0;

}
