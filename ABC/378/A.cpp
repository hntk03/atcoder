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

	map<int, int> mp;

	REP(i,4){
		int A; cin >> A;
		mp[A]++;
	}

	int ans = 0;
	for(auto x : mp){
		int cnt = x.second / 2;
		ans += cnt;
	}

	cout << ans << endl;

	return 0;

}
