#include <stdio.h>
#include <cmath>
#include <string>
#include <vector>
#include <string.h>
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
	char s[101];

	scanf("%d", &n);
	scanf("%s", s);

	if(n%2 == 0){
		printf("-1\n");
		return 0;
	}

	char a[101] = {};
	char b[101] = {};
	a[0] = 'b';

	int i;
	for(i=0;strlen(a) != n;++i){
		switch(i%3){
			case 0:
				sprintf(a, "%sc",a);
				sprintf(b, "a%s",a);
				strcpy(a,b);
				break;
			case 1:
				sprintf(a, "%sa",a);
				sprintf(b, "c%s",a);
				strcpy(a,b);
				break;
			case 2:
				sprintf(a, "%sb",a);
				sprintf(b, "b%s",a);
				strcpy(a,b);
				break;

			default:
				break;
		}
		
	}

	if(strcmp(a,s) == 0){
		printf("%d\n",i);
	}else{
		printf("-1\n");
	}


	return 0;

}
