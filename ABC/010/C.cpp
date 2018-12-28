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

	int txa,tya,txb,tyb,T,V;
	scanf("%d %d %d %d %d %d", &txa, &tya, &txb, &tyb, &T, &V);

	int n; scanf("%d", &n);
	int x,y;
	REP(i,n){
		scanf("%d %d", &x, &y);
		double l1 = sqrt(pow(txa-x,2)+pow(tya-y,2));
		double l2 = sqrt(pow(txb-x,2)+pow(tyb-y,2));
		if((l1+l2) <= T*V){
			printf("YES\n");
			return 0;
		}

	}

	printf("NO\n");

	return 0;

}
