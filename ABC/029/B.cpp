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

	char s[11];
	int ans = 0;
	REP(i,12){
		scanf("%s", s);
		REP(i,strlen(s)){
			if(s[i] == 'r'){
				ans++;
				break;
			}
		}

	}

	printf("%d\n", ans);

	return 0;

}
