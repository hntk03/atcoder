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
	map<int, int> all;
	REP(i,N){
		int D; cin >> D;
		all[D]++;
	}

	int M;
	map<int, int> sub;
	REP(i,M){
		int T; cin >> T;
		sub[T]++;
	}

	bool ans = true;
	for(auto itr=sub.begin();itr!= sub.end();++itr){
		if(itr->second > all[itr->first]) ans = false;
	}

	if(ans) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;

}
