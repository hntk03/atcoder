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

	char s[51];
	scanf("%s", s);
	int len = strlen(s);

	if(s[len-1] == 'T') printf("YES\n");
	else printf("NO\n");


	return 0;

}
