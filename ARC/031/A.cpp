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

	char name[101]; scanf("%s", name);

	int len = strlen(name);
	REP(i,len/2){
		if(name[i] != name[len-i-1]){
			printf("NO\n");
			return 0;
		}

	}


	printf("YES\n");

	return 0;

}
