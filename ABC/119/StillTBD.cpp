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

	int y,m,d;
	scanf("%d/%d/%d", &y, &m, &d);

	if(2019 >= y and 4 >= m and 30 >= d) printf("Heisei\n");
	else printf("TBD\n");

	return 0;

}
