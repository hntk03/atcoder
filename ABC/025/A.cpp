#include <stdio.h>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	char s[6];
	scanf("%s", s);
	int len = strlen(s);

	int n; scanf("%d", &n);

	int cnt = 0;
	REP(i,len){
		REP(j,len){
			if(cnt == n-1)
				printf("%c%c\n",s[i],s[j]);
			cnt++;
		}
	}


	return 0;

}
