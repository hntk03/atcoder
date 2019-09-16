#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	string S; cin >> S;
	bool ans = true;

	REP(i,S.length()){
		if(S[i] == 'L' and i % 2 == 0) ans = false;
		else if(S[i] == 'R' and i % 2 == 1) ans = false;
	}
	
	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;

}
