#include <stdio.h>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	char s[13];
	scanf("%s", s);

	for(int i=0;s[i]!='\0';++i){
		s[i] = tolower(s[i]);
	}
	s[0] = toupper(s[0]);

	printf("%s\n",s);

	return 0;

}
