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

	char s[101]; scanf("%s", s);
	int n; scanf("%d", &n);
	
	int l,r;
	REP(i,n){
		scanf("%d %d", &l, &r);
		REP(j,(r-l+1)/2){
			swap(s[l+j-1],s[r-j-1]);
		}
	}

	printf("%s\n",s);


	return 0;

}
