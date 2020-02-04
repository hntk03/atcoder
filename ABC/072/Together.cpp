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

	map<int, int> mp;
	REP(i,N){
		mp[a[i]]++;
		mp[a[i]-1]++;
		mp[a[i]+1]++;
	}

	int ans = -1;
	for(auto a:mp){
		ans = max(ans, a.second);
	}

	cout << ans << endl;
	return 0;

}
