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

bool solve(){

	int K; cin >> K;
	string S, T; cin >> S >> T;

	if(S == T) return true;
	if(S.size() == T.size()){
		int cnt = 0;
		REP(i,S.size()){
			if(S[i] != T[i]) cnt++;
		}

		return cnt <= 1;
	}
	if(S.size() < T.size()) swap(S, T);
	if(S.size() != T.size()+1) return false;

	int maxL = 0, maxR = 0;
	REP(i,T.size()){
		if(S[i] != T[i]) break;
		maxL++;
	}
	for(int i = T.size()-1; i>=0;i--){
		if(S[i+1] != T[i]) break;
		maxR++;
	}

	return maxL+maxR >= T.size();
}

int main(void){

	if(solve()) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
