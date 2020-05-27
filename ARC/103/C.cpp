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
const int MAX = 1e5 + 5;

int main(void){

	int n; cin >> n;

	vector<int> v(n);
	REP(i,n) cin >> v[i];

	map<int,int> even;
	map<int,int> odd;

	REP(i,n){
		if(i%2 == 0) even[v[i]]++;
		else odd[v[i]]++;
	}

	vector<pair<int, int>> e;
	vector<pair<int, int>> o;
	for(auto a: even){
		e.push_back(make_pair(a.second, a.first));
	}
	for(auto a: odd){
		o.push_back(make_pair(a.second, a.first));
	}

	SORT(e);
	SORT(o);




	int ans = 0;
	if(o.back().second != e.back().second) ans += n - o.back().first - e.back().first;
	else{
		ans += n - max(o.back().first + e[e.size()-2].first, e.back().first+o[o.size()-2].first);
	}

	cout << ans << endl;




	return 0;

}
