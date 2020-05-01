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
	vector<int> a(N);

	REP(i,N) cin >> a[i];

	vector<int> s = a;
	SORT(s);
	s.erase(unique(s.begin(), s.end()), s.end());

	map<int, int> mp;
	REP(i,s.size()){
		cerr << "hoge" << endl;
		mp[s[i]] = i;
	}

	REP(i,a.size()){
		cout << mp[a[i]] << endl;
	}



	return 0;

}
