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

	vector<string> C(2);
	REP(i,2) cin >> C[i];

	if(C[0][0] == C[1][2] and C[0][1] == C[1][1] and C[0][2] == C[1][0]) cout << "YES" << endl;
	else cout << "NO" << endl;
	
		


	return 0;

}
