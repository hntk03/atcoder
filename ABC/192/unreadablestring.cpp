#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	string S; cin >> S;

	bool ans = true;
	REP(i,S.length()){
		if(i%2 == 0 and islower(S[i])) continue;
		else if(i%2 == 1 and isupper(S[i])) continue;
		else ans = false;

	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
