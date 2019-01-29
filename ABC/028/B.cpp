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

	char s[101]; scanf("%s", s);
	int ans[6] = {0};

	for(int i=0;s[i] != '\0'; ++i){
		ans[s[i] - 'A']++;
	}

	REP(i,6){
		if(i == 5)
			printf("%d", ans[i]);
		else
			printf("%d ", ans[i]);
	}
	printf("\n");

	return 0;

}
