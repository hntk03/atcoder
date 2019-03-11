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

	int A, B; cin >> A >> B;
	if(A == 1) A = 14;
	if(B == 1) B = 14;

	if(A > B) cout << "Alice" << endl;
	else if(A < B) cout << "Bob" << endl;
	else cout << "Draw" << endl;


	return 0;

}
