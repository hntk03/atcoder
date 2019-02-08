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

	int A,B; scanf("%d %d", &A, &B);

	
	if(B%A == 0) printf("%d\n",B/A); 
	else printf("%d\n", B/A+1);

	return 0;

}
