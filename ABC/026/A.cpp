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

	int A; scanf("%d", &A);

	int x=A,y=0;
	int ans = 0;
	while(x != 0){
		ans = max(x*y,ans);
		x--;
		y++;
	}

	printf("%d\n", ans);
		
	return 0;

}
