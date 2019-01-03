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

	int a,b,c; scanf("%d %d %d", &a, &b, &c);

	if(a > b && b > c)
		printf("1\n2\n3\n");
	else if(a > c && c > b)
		printf("1\n3\n2\n");
	else if(b > a && a > c)
		printf("2\n1\n3\n");
	else if(b > c && c > a)
		printf("3\n1\n2\n");
	else if(c > a && a > b)
		printf("2\n3\n1\n");
	else if(c > b && b > a)
		printf("3\n2\n1\n");


	return 0;

}
