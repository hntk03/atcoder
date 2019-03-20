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
	
	bool ans = true;
	if(S.front() != 'A') ans = false;
 	else if(!count(S.begin()+2, S.end()-1, 'C')) ans = false;
	else{
		int cnt = 0;
		REP(i,S.length()) if(islower(S[i])) cnt++;
		if(!(cnt == S.length()-2))  ans = false;
	}

	if(ans == true) cout << "AC" << endl;
	else cout << "WA" << endl;

	return 0;

}
