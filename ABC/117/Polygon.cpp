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
	int L;
	int sum = 0;
	int m = -1;

	REP(i,N){
		scanf("%d", &L);
		m = max(m,L);
		sum += L;
	}
	sum -= m;
	if(m<sum)
		printf("Yes\n");
	else
		printf("No\n");



	return 0;

}
