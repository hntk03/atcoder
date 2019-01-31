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

	REP(i,(int)pow(3,N)){
		int p = i;
		for(int j=N-1;j>=0;--j){
			int a = p / (int)pow(3,j);
			p -= (int)pow(3,j)*a;
			switch(a){
				case 0:
					printf("a");
					break;
				case 1:
					printf("b");
					break;
				case 2:
					printf("c");
					break;
			}
		}
		printf("\n");
	}


	return 0;

}
