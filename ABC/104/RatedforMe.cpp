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

	int R; cin >> R;

	if(R < 1200) cout << "ABC" << endl;
	else if(R < 2800) cout << "ARC" << endl;
	else  cout << "AGC" << endl;


	return 0;

}
