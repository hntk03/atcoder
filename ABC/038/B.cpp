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

	int H1,W1; scanf("%d %d", &H1, &W1);
	int H2,W2; scanf("%d %d", &H2, &W2);

	if(H1 == H2 or H1 == W2 or H2 == W1 or W1 == W2) printf("YES\n");
	else printf("NO\n");



	return 0;

}
