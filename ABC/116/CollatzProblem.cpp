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

int f(int n){
	if(n%2 == 0) return n/2;
	else return 3*n+1;
}

int main(void){

	int s; scanf("%d", &s);
	int array[100000] = {0};

	array[s] = 1;
	int i = 1;
	while(array[s] != 2){
		s = f(s);
		array[s]++;
		i++;
	}
	
	printf("%d\n",i);


	return 0;

}
