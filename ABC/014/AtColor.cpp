#include <stdio.h>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <map>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	// int n; scanf("%d", &n);
	// int x[1000001] = {0};
	// int a,b;
	// REP(i,n){
	// 	scanf("%d %d", &a, &b);
	// 	FOR(j,a,b+1) x[j]++;
	// }
	//
	// printf("%d\n",*max_element(x,x+1000001));
	int n; scanf("%d", &n);
	int x[1000001] = {0};
	int a,b;
	map<int, int> count;
	REP(i,n){
		scanf("%d %d", &a, &b);
		FOR(j,a,b+1) count[j]++;
	}

	int ans = 0;
	for(auto iter = count.begin();iter!=count.end();++iter){
		ans = max(ans,iter->second);
	}

	printf("%d\n", ans);
	return 0;

}
