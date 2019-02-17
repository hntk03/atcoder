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

	int A[N];
	bool guusuu = true;
	bool kisuu = true;
	bool same = true;
	REP(i,N){ 
		scanf("%d", &A[i]);
		if(A[i]%2 == 0) kisuu = false;
		else if(A[i]%2 == 1) guusuu = false;
		if(i > 0 and A[i] != A[i-1]) same = false;

	}

	if(same) printf("%d\n",A[0]);
	else if(guusuu) printf("2\n");
	else printf("1\n");


	// sort(A,A+N);

	// int small=A[0];
	// int large=A[1];

	// while(small != large){
	// 	large = large - small;
	//
	// 	if(small > large){
	// 		int tmp = small;
	// 		small = large;
	// 		large = tmp;
	// 	}
	// }

	// if(small == large){}
	// else if(small % 2 == 0 and large %2 == 0)
	// 	small = 2;
	// else
	// 	small = 1;
	//
	// printf("%d\n", small);


	return 0;

}
