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

	int A,B,K; scanf("%d %d %d", &A, &B, &K);

	int count = 0;
	int ans = 0;
	for(int i=min(A+1,B+1); i >= 0; --i){

		if(count == K) break;
		else{
			if(A%i == 0 and B%i == 0){
				count++;
				ans = i;
				// printf("%d\n", ans);
			}
		}
	}

	printf("%d\n", ans);

	return 0;

}
