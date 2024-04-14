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

	vector<int> A(3*N);
	REP(i,3*N) cin >> A[i];

	map<int, vector<int> > mp;

	REP(i,A.size()){
		mp[A[i]].push_back(i+1);
	}

	FOR(i,1,N+1){
		sort(mp[i].begin(), mp[i].end());
	}

	vector<pair<int, int> > v;
	FOR(i,1,N+1){
		v.push_back(make_pair(mp[i][1], i));
	}

	sort(v.begin(), v.end());

	REP(i,v.size()){
		cout << v[i].second << " ";
	}
	cout << endl;

	return 0;

}
