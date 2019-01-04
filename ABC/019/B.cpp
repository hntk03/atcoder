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

	char s[1001]; scanf("%s" ,s);

	int cnt = 1;
	char c = s[0];
	for(int i=1;s[i] != '\0';++i){
		if(c == s[i]) cnt++;
		else{
			printf("%c%d",c,cnt);
			cnt = 1;
			c = s[i];
		}

	}
			printf("%c%d",c,cnt);

	printf("\n");

	return 0;

}
