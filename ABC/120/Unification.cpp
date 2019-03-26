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

	string S; cin >> S;

	int red = 0;
	int blue = 0;
	REP(i,S.length()){
		if(S[i] == '0') red++;
		else if(S[i] == '1') blue++;
	}

	cout << min(red, blue)*2 << endl;

	return 0;

}
