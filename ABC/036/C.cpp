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
	vector<int> b = a;

	SORT(b);
	map<int, int> mp;
	int idx = 0;
	int tmp = -1;
	REP(i, b.size()){
		if(tmp == b[i]) continue;
		mp[b[i]] = idx;
		idx++;
		tmp = b[i];
	}

	REP(i,N){
		cout << mp[a[i]] << endl;
	}



	return 0;

}
