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

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	set<int> color;
	color.insert(a);
	color.insert(b);
	color.insert(c);

	printf("%d\n", color.size());


	return 0;

}
