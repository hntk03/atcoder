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
	map<int, vector<int>> mp;
	REP(i,N){
		int A; cin >> A;
		mp[A].push_back(i);
	}

	int Q; cin >> Q;
	vector<int> ans;
	REP(i,Q){
		int L, R, X; cin >> L >> R >> X;
		L--;
		R--;
		int l = lower_bound(mp[X].begin(), mp[X].end(), L) - mp[X].begin();
		int r = upper_bound(mp[X].begin(), mp[X].end(), R) - mp[X].begin();

		ans.push_back(max(r - l, 0));
	}

	for(int x : ans){
		cout << x << endl;
	}

	return 0;

}
