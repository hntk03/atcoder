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

	int D, N; cin >> D >> N;
	int b = pow(100, D);

	if(N != 100) cout << b * N << endl;
	else cout << b * (N+1);

	return 0;

}
