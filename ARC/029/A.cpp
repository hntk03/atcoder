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

	int N; scanf("%d", &N);
	int t[4];
	REP(i,N) scanf("%d", &t[i]);

	switch(N){

		case 1:
			printf("%d\n", t[0]);
		case 2:
			printf("%d\n", max(t[0], t[1]));
		case 3:


	}


	return 0;

}
