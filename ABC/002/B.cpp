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

	char w[31];
	scanf("%s",w);

	for(int i=0;w[i]!='\0';++i){
		if(w[i] == 'a' || w[i] == 'i' || w[i] == 'u' || w[i] == 'e' || w[i] == 'o'){}
		else printf("%c",w[i]);
	}

	printf("\n");

	return 0;

}
