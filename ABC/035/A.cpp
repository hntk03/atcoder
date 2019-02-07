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

	int W,H; scanf("%d %d", &W, &H);

	if(W%16 == 0 and H%9 == 0) printf("16:9\n");
	else printf("4:3\n");


	return 0;

}
