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

	int A, B, C, D; cin >> A >> B >> C >> D;

	bool ans = true;
	if(A > C) ans = true;
	else if(A == C and B > D) ans = true;
	else ans = false;
	
	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
