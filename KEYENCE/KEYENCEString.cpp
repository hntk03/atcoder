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

	char S[101];
	char correct[] = "keyence";
	int j = 0;

	scanf("%s", S);
	int S_size = strlen(S);
	int diff = S_size - strlen(correct);
	int begin=0;
	int end=diff;
	while(end<S_size){
		int j = 0;
		for(int i=0;i<S_size;++i){
			if(i >= begin && i < end) continue;
			else if(S[i] == correct[j]) j++;
		}

	if(j == 7) {printf("YES\n");return 0;}
		begin++;
		end++;
	}

	printf("NO\n");

	return 0;

}
