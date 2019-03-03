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

	char s[11]; scanf("%s", s);
	int N = strlen(s);
	int idx = 0;
	char ans[20];

	REP(i,N){
		switch(s[i]){
			case '0':
				ans[idx++] = '0';
				break;
			case '1':
				ans[idx++] = '1';
				break;
			case 'B':
				if(idx != 0) ans[idx--] = '\0';
				else{continue;}
				break;
			default:
				break;
		}

	}

	REP(i,idx) printf("%c", ans[i]);

	printf("\n");

	return 0;

}
