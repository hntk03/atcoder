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

	int N,Y; scanf("%d %d", &N, &Y);



	REP(x,N+1){
		int _x = 10000*x;
		REP(y,N+1){
			int z = N - (x + y);
			if(0 <= z and (_x+y*5000+1000*z) == Y){
				printf("%d %d %d\n", x, y, z);
				return 0;
			}
			
		}
	}




	printf("-1 -1 -1\n");
	return 0;

}
