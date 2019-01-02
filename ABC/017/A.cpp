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


#define LOOP 3

int main(void){

	int s,e;
	int ans = 0;
	REP(i,LOOP){
		scanf("%d %d",&s, &e);
		ans += s * e / 10;
	}

	printf("%d\n",ans);


	return 0;

}
