#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	string s; cin >> s;
	string t; cin >> t;
	int a = t.length();
	if(s.length() + 1 == t.length() and s == t.substr(0, a-1)) cout << "Yes" << endl;
	else cout << "No" << endl;


	return 0;

}
