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

	string S, T; cin >> S >> T;	
	
	REP(i,26){
		string ns = S;
		REP(j,S.length()){
			ns[j] = (S[j]-'a' + i)%26+'a';
		}
		if(ns == T){
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
	return 0;

}
