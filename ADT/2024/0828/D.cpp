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
	vector<int> S(N);
	for(int &s : S) cin >> s;

	map<int, bool> mp;
	FOR(a,1,200){
		FOR(b,1,200){
			int s = 4*a*b + 3*a + 3*b;
			mp[s] = true;
		}
	}

	int ans = 0;
	for(int s:S){
		if(mp[s])  continue;
		ans++;
	}

	cout << ans << endl;

	return 0;

}
