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

	string S, T;
	cin >> S >> T;
	int S_len = S.length();
	
	bool ans = false;
	REP(i,S_len){
		S = S.back() + S.substr(0,S_len-1);
		if(S == T) ans = true;
	}
	
	cout << (ans ? "Yes" : "No") << endl;

	return 0;

}
