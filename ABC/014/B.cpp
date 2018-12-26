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

	int n,x; scanf("%d %d", &n, &x);
	int max = (int)pow(2,n) - 1;

	int a[1000];
	REP(i,n) scanf("%d", &a[i]);

	int ans = 0;
	REP(i,max){
		if(x & 1) ans += a[i];
		x = x >> 1;
	}

	printf("%d\n", ans);

	return 0;

}
