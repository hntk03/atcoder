#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

bool kaibun(string s){
	int n = s.length();
	int h = n/2;
	REP(i,h){
		if(s[i] != s[n-i-1]) return false;
	}
	return true;
}

int main(void){

	string S; cin >> S;
	int N = S.length();
	bool a = kaibun(S);
	bool b = kaibun(S.substr(0, (N-1)/2));
	bool c = kaibun(S.substr((N+3)/2-1));

	if(a and b and c) cout << "Yes" << endl;
	else cout << "No" << endl;



	return 0;

}
