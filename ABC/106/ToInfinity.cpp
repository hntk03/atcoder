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
	ll K; cin >> K;

	ll idx = 0;
	REP(i,S.length()){
		if(S[i] == '1') idx++;
		else break;
	}

	if(K <= idx) cout << '1' << endl;
	else cout << S[idx] << endl;

	return 0;

}
