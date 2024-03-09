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
	map<ll, int> lines;

	REP(i,N){
		ll A; cin >> A;
		lines[A]++;
	}

	vector<pair<ll, int> > v;
	for(auto line : lines){
		if(line.second < 2) continue;
		REP(i,line.second/2){
			v.push_back(make_pair(line.first, 2));
		}

	}

	sort(v.begin(), v.end());

	if(v.size() == 0 or v.size() == 1) cout << "0" << endl;
	else cout << v.back().first * v[v.size()-2].first << endl;

	return 0;

}
