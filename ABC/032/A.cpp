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

	int a,b,n; 
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &n);

	bool flag = true;
	while(flag){
		if(n%a == 0 and n%b == 0){
			printf("%d\n",n);
			flag = false;
		}
		n++;
	}

	return 0;

}
