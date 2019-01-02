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

	char s[51]; scanf("%s", s);

	for(int i=0;s[i] != '\0';++i){
		if(s[i] == 'c' && s[i+1] == 'h') i++;
		else if(s[i] == 'o') continue;
		else if(s[i] == 'k') continue;
		else if(s[i] == 'u') continue;
		else{
			printf("NO\n");
			return 0;
		}
	}

	printf("YES\n");

	return 0;

}
