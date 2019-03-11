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

	// long long int a, b, x; scanf("%lld %lld %lld", &a, &b, &x);
	long long int a, b, x; scanf("%d %d %d", &a, &b, &x);

	long long int ans = 0;
	FOR(i,a,b+1){
		if(i%x == 0) ans++;
	}

	printf("%lld\n", ans);

	return 0;

}
