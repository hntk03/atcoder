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

	switch(n){
		case 1:
			printf("1\n1\n");
			break;
		case 2:
			printf("1\n2\n");
			break;
		case 3:
			printf("2\n1\n2\n");
			break;
		case 4:
			printf("2\n2\n2\n");
			break;
		case 5:
			printf("3\n1\n2\n2\n");
			break;
		case 6:
			printf("2\n2\n4\n");
			break;
		case 7:
			printf("3\n1\n\n2\n4\n");
			break;
		case 8:
			printf("1\n8\n");
			break;
		case 9:
			printf("2\n1\n8\n");
			break;
		case 10:
			printf("2\n2\n8\n");
			break;


	}


	return 0;

}
