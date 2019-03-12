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

	int A,B,C; cin >> A >> B >> C;

	if(A == B) cout << C << endl;
	else if(A == C) cout << B << endl;
	else cout << A << endl;


	return 0;

}
