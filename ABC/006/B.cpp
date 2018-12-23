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


int tori(int n){

	if(n == 1) return 0;
	else if(n == 2) return 0;
	else if(n == 3) return 1;
	else{
		return tori(n-1) + tori(n-2) + tori(n-3);
	}
}

int main(void){

	int n;
	scanf("%d", &n);

	int an;
	int an1 = 0;
	int an2 = 0;
	int an3 = 1;

	REP(i,n){
		an = (an1 + an2 + an3) % 10007;
		an3 = an2;
		an2 = an1;
		an1 = an;
	}


	printf("%d\n",an);

	return 0;

}
