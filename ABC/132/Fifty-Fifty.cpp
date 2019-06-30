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
	bool ans = false;
	if(S[0] == S[1] and S[2] == S[3] and S[0] != S[2]) ans = true;
	else if(S[0] == S[2] and S[1] == S[3] and S[0] != S[1]) ans = true;
	else if(S[0] == S[3] and S[1] == S[2] and S[0] != S[1]) ans = true;
	else if(S[1] == S[2] and S[0] == S[3] and S[1] != S[3]) ans = true;

	if(ans == true) cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;

}
