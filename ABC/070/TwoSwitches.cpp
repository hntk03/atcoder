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

	int A, B, C, D; cin >> A >> B >> C >> D;

	int lower = max(A, C);
	int upper = min(B, D);

	cout << max(0, upper-lower) << endl;



	return 0;

}
