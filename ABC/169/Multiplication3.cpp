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

	ll A; cin >> A;
	string S; cin >> S;
	
	ll B = 0;
	REP(i,S.length()){
		if(S[i] == '.') continue;
		B *= 10;
		B += S[i] - '0';

	}


	ll ans = A*B/100;
	cout << ans << endl;
	


	return 0;

}
