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

	int N; cin >> N;
	
	map<int, int> mp;
	REP(i,N){
		int A; cin >> A;
		mp[A]++;
	}

	int ans = 0;
	for(auto a: mp){
		int idx = a.first;
		int cnt = a.second;
		
		if(idx < cnt) ans += cnt - idx;
		else if(cnt < idx) ans += cnt;
	}

	cout << ans << endl;

	return 0;

}
