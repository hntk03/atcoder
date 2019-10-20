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
	
	int N = s.length();
	int g=0, p=0;
	REP(i,N){
		if(s[i] == 'g') g++;
		else if(s[i] == 'p') p++;
	}
	
	int ans;
	if(p < g) ans = 0;
	else if(p == g) ans = N;
	else if(g < p) ans = p - g;

	cout << ans << endl;

	return 0;

}
