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


	int a[3] = {0};
	REP(i,3){ 
		int x,y;
		scanf("%d %d", &x, &y);
		a[x]++;
		a[y]++;

	}

	bool flag1 = false;
	bool flag2 = false;

	FOR(i,1,5){
		if(a[i] == 1) flag1 = true;
		else if(a[i] == 2) flag2 = true;
	}


	if(flag1 and flag2) printf("YES\n");
	else printf("NO\n");


	return 0;

}
