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

	int n; scanf("%d", &n);
	int a;
	int num = 0;
	double ans = 0.0;
	
	REP(i,n){ 
		scanf("%d", &a);
		if(a != 0){
			ans += a;
			num++;
	}
}

	ans = ceil(ans / num);

	printf("%d\n", (int)ans);


	return 0;

}
