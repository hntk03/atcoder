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

	int l1,l2,l3; scanf("%d %d %d", &l1, &l2, &l3);

	if(l1 == l2) printf("%d\n", l3);
	else if(l1 == l3) printf("%d\n", l2);
	else if(l2 == l3) printf("%d\n", l1);


	return 0;

}
