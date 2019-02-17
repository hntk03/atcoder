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

	int X; scanf("%d",&X);

	int ans = (int)sqrt(X);
	ans = (int)sqrt(ans);


	printf("%d\n", ans);


	return 0;

}
