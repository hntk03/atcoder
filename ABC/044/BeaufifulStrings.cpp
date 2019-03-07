#include <stdio.h>
#include <cmath>
#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	int alpha[26]	= {0};

	char w[101]; scanf("%s", w);

	int len = strlen(w);
	REP(i,len){
		alpha[w[i] - 'a']++;
	}

	REP(i,26){
		if(alpha[i]%2 == 1){
			printf("No\n");
			return 0;
		}
	}

	printf("Yes\n");

	return 0;

}
