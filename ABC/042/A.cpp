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

	int v[3]; 

	REP(i,3) scanf("%d", &v[i]);

	sort(v,v+3);

	bool ans = false;
	if(v[0] == 5 and v[1] == 5 and v[2] == 7) ans = true;

	if(ans) printf("YES\n");
	else printf("NO\n");


	return 0;

}
