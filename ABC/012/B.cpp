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
	int hour = n/(60*60);
	n = n % (60*60);
	int minute = n/60;
	int second = n%60;

	printf("%02d:%02d:%02d\n", hour, minute, second);


	return 0;

}
