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

	int max = 2025;
	int d = max - n;

	int product[9][9];

	// REP(i,9){
	// 	FOR(j,i,9){
	//		
	// 	}
	// }
	REP(i,9){
		REP(j,9){
			if((i+1)*(j+1) == d) printf("%d x %d\n",(i+1),(j+1));
			
		}
	}

	return 0;

}
