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
	vector<string> s(N);
	map<string, int> m;

	REP(i,N){
		string a; cin >> a;
		SORT(a);
		s[i] = a;
		m[a]++;
	}


	ll ans = 0;

	for(auto itr = m.begin(); itr != m.end(); ++itr) {
		ll d = itr->second;
		ans += (d*(d-1))/2;
	}

	cout << ans << endl;

	return 0;

}
