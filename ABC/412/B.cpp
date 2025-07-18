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

bool isIn(char c, string s){
	for(char ch : s){
		if(ch == c) return true;
	}

	return false;
}

int main(void){

	string S, T; cin >> S >> T;


	bool ans = true;

	FOR(i,1,S.size()){
		if(isupper(S[i]) and !isIn(S[i-1], T)) ans = false;
	}

	cout << (ans?"Yes":"No") << endl;
	return 0;

}
