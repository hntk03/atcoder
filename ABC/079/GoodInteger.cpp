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

	char N[5]; scanf("%s", &N);

	bool flag = false;

	if(N[0] == N[1] and N[1] == N[2]) flag = true;
	else if(N[1] == N[2] and N[2] == N[3]) flag = true;

	if(flag) printf("Yes\n");
	else printf("No\n");



	return 0;

}
