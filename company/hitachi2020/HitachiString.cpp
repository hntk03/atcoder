#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){

	string S; cin >> S;
	int l = S.length()/2;
	string ans = "";
	REP(i,l) ans += "hi";

	if(S == ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
