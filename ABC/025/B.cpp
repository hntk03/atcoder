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

	int N,A,B; scanf("%d %d %d", &N, &A, &B);
	char s[5];
	int d;
	int now = 0;

	REP(i,N){
		scanf("%s %d", s, &d);
		if (strcmp(s,"East") == 0){
			if(d < A){
				now += A;
			}else if(A <= d && d <= B){
				now += d;
			}else{
				now += B;
			}
		}else{
			if(d < A){
				now -= A;
			}else if(A <= d && d <= B){
				now -= d;
			}else{
				now -= B;
			}
		}

	}

	if(now == 0)
		printf("0\n");
	else if(now < 0){
		printf("West %d\n",-now);
	}else{
		printf("East %d\n",now);

	}

	return 0;

}
