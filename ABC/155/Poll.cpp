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

	int N; cin >> N;
	map<string, int> mp;

	REP(i,N){
		string s; cin >> s;
		mp[s]++;
	}

	vector<pair<int, string>> v;
	for(auto a:mp){
		v.push_back(make_pair(-a.second, a.first));
	}

	SORT(v);

	int tmp = v.front().first;

	REP(i,v.size()){
		if(tmp == v[i].first) cout << v[i].second << endl;
		else break;
	}


	return 0;

}
