#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	string s; cin >> s;

	bool ans = true;

	int s_len = s.length();
	REP(i,s_len){
		if(s[i] == s[s_len-i-1] or s[i] == '*' or s[s_len-i-1] == '*') ans = true;
		else{
			ans = false;
			break;
		}
	}

	if(ans == true) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;

}
