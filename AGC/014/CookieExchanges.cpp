#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

int func(int A, int B, int C){

	if(A % 2 == 1 or B % 2 == 1 or C % 2 == 1) return 0;
	if(A == B and B == C) return -1;

	return func((B+C)/2, (C+A)/2, (A+B)/2) + 1;

}



int main(void){

	int A, B, C; cin >> A >> B >> C;
	int ans = func(A, B, C);

	cout << ans << endl;


	return 0;

}
