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

long long int func(long long n, long long x){
	if(n == -1) return -1;
	return (n/x);

}


int main(void){


	long long a, b, x; cin >> a >> b >> x;

	long long int ans = func(b,x) - func(a-1,x);
	cout << ans << endl;



	return 0;

}
