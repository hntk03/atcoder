#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(void){

	int N; cin >> N;
	int ans = 0;

	FOR(i,1,N+1){
		string s = to_string(i);
		if(s.length() % 2 == 1) ans++;
	}

	cout << ans << endl;

	return 0;

}
