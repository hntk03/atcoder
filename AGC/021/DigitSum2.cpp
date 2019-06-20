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

  ll N = s[0] - '0';
	REP(i,s.length()-1){
		N *= 10;
		N += 9;
	}

	int ans = 0;
	if(stol(s) == N){
		ans = s[0] - '0' + 9 * (s.length()-1);
	}else{
		ans = s[0] - '0' + 9 * (s.length()-1) - 1;
	}

	cout << ans << endl;

	


	return 0;

}
