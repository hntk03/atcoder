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

	int D; cin >> D;
	
	if(D == 25) cout << "Christmas" << endl;
	else if(D == 24) cout << "Christmas Eve" << endl;
	else if(D == 23) cout << "Christmas Eve Eve" << endl;
	else if(D == 22) cout << "Christmas Eve Eve Eve" << endl;




	return 0;

}
