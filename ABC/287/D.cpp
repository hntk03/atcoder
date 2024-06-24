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

bool issame(char s, char t){
	if(s == '?') return true;
	if(t == '?') return true;
	if(s == t) return true;
	return false;
}

void disp(int num, int N){
	if(num == N) cout << "Yes" << endl;
	else cout << "No" << endl;
}


int main(void){

	string S,T; cin >> S >> T;

	int ok = 0;
	REP(ti,T.size()){
		int si = S.size() - T.size() + ti;
		if(issame(S[si], T[ti])) ok++;
	}

	disp(ok, T.size());

	int now = 0;
	int prev = S.size() - T.size();
	FOR(i,1,T.size()+1){

		if(issame(S[prev], T[now])) ok--;
		if(issame(S[now], T[now])) ok++;

		disp(ok, T.size());

		now++;
		prev++;
	}

	return 0;

}
