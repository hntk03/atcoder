#include <stdio.h>
#include <cmath>
#include <string>
#include <cstring>
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

	char a[11];
	scanf("%s",a);

	int len = strlen(a);

	if(len == 1){
		if(a[0] == 'a') printf("-1");
		else printf("a");
	}else{
		REP(i,len-1) printf("%c",a[i]);
	}
	printf("\n");


	return 0;

}
