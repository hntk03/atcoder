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

	char N[5]; scanf("%s", N);

	bool f1 = (N[0] == N[1]);
	bool f2 = (N[2] == N[1]);
	bool f3 = (N[3] == N[1]);
	if( f1 == true and f2 == true and f3 == true) printf("SAME\n");
	else printf("DIFFERENT\n");
	


	return 0;

}
