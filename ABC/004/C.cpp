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

	int left;
	int right;
	char card[] = "123456";

	REP(i,n){
		left = (i % 5);
		right = (i % 5)+1;
		swap(card[left], card[right]);
	}

	printf("%s\n",card);

	return 0;

}
