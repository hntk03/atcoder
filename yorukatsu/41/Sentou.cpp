#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	int N, T; cin >> N >> T;
	vector<int> t(N);

	REP(i,N) cin >> t[i];


	int ans = 0;
	REP(i,N-1){
		ans += min(T, t[i+1] - t[i]);
	}
	ans += T;
		
	cout << ans << endl;


	return 0;

}
