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

const ll INF = LLONG_MAX;

int main(void){

	int N; cin >> N;
	vector<int> A(N);
	REP(i,N) cin >> A[i];

	int ans = 1 << 30;
	REP(s,1<<(N-1)){
		int now = 0;
		int o = 0;
		REP(i,N){
			o |= A[i];
			if(s>>i&1){
				now ^= o;
				o = 0;
			}
		}
		now ^= o;
		ans = min(ans, now);
	}


	cout << ans << endl;

	return 0;

}
