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
	int a[9];

	REP(i,n) scanf("%d", &a[i]);
	
	int ans = 0;
	REP(i,n){
		while( a[i]%2==0 || a[i]%3 == 2){
			a[i]--;
			ans++;
		}
	}

	printf("%d\n", ans);


	return 0;

}
