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

	int N; cin >> N;
	string S; cin >> S;
	vector<int> W(N);
	REP(i,N) cin >> W[i];

	vector<pair<int, char> > p(N);
	REP(i,N){
		p[i] = make_pair(W[i], S[i]);
	}

	map<int, pair<int, int> > mp;
	REP(i,N){
		if(p[i].second == '0') mp[p[i].first].first++;
		else mp[p[i].first].second++;
	}

	ll ok = 0;
	REP(i,N) if(S[i] == '1') ok++;

	ll ans = ok;
	for(auto x : mp){
		ok += x.second.first;
		ok -= x.second.second;
		ans = max(ans, ok);
	}

	cout << ans << endl;

	return 0;

}
