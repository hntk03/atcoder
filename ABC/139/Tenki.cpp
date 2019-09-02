#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	string s, t;
	cin >> s;
	cin >> t;

	int ans = 0;
	REP(i,3){
		if(s[i] == t[i]) ans++;
	}

	cout << ans << endl;

	return 0;

}
