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
	// int a[100];
	int a;

	int sum = 0;
	REP(i,N){
		scanf("%d", a);
		sum += a;
	}

	if(sum %N == 0){
		REP(i,N){
		
		}

	}else{
		printf("-1\n");
	}
	return 0;

}
