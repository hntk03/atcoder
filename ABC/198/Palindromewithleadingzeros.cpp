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
	int N = S.length();

	int cnt = 0;
	REP(i,N){
		if(S[N-i-1] == '0') cnt++;
		else break;
	}
	
	string z = "";
	REP(i,cnt) z += '0';

	S = z + S;
	N = S.length();

	bool ans = true;
	REP(i,N/2){
		if(S[i] == S[N-i-1]) continue;
		else ans = false;
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;

}
