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

	int n; scanf("%d", &n);
	int h[n];
	REP(i,n) scanf("%d", &h[i]);

	int c[n] = {0};
	int l = 0;
	int r;
	
	int flag = 1;
	int ans = 0;
	int i;
	while(flag){
		i = l;
		if(c[i] < h[i]) 

	}


	return 0;

}
