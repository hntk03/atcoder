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

	string s; cin >> s;

	bool upper = isupper(s[0]);

	FOR(i,1,s.length()){
		if(isupper(s[i])){
			cout << "No" << endl;
			return 0;
		}
	}
	
	if(upper) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
