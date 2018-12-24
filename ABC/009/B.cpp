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

	int N;
	scanf("%d", &N);
	int a[1000];
	REP(i,N) scanf("%d", &a[i]);


	sort(a,a+N);
	int max = a[N-1];
	for(int i=N-2;i>=0;--i){
		if(max != a[i]){
			max = a[i];
			break;
		}
		
	}
	printf("%d\n",max);


	return 0;

}
