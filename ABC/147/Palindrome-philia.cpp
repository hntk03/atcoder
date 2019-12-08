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

	int ans = 0;
	int N = s.length();

	REP(i,N/2){
		if(s[i] != s[N-i-1])  ans++;
	}
	cout << ans << endl;


	return 0;

}
