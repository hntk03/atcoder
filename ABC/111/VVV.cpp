#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){

	int n; cin >> n;
	vector<int> v(n);

	REP(i,n) cin >> v[i];

	map<int, int> odd;
	map<int, int> even;
	REP(i,n){
		if(i%2 == 0) even[v[i]]++;
		else odd[v[i]]++;
	}

	vector<pair<int, int>> o;
	vector<pair<int, int>> e;
	for(auto a: odd){
		o.push_back(make_pair(a.second, a.first));
	}
	for(auto a: even){
		e.push_back(make_pair(a.second, a.first));
	}

	SORT(o);
	SORT(e);

	
	
	int ans = 0;
	if(o.back().second == e.back().second){
		ans = (n/2 - o.back().first) + (n/2 - e[e.size()-2].first);
		ans = min((n/2 - o[o.size()-2].first) + (n/2 - e.back().first), ans);
	}else{
		ans = (n/2 - o.back().first) + (n/2 - e.back().first);
	}

	cout << ans << endl;
	return 0;

}
