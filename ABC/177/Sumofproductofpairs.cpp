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
const int M = 1e9+7;

int main(void){

	
	int N; cin >> N;

	vector<ll> A(N);
	REP(i,N) cin >> A[i];

	ll sum = 0;
	REP(i,N) sum = (A[i] + sum) % M;

	ll ans = 0;
	REP(i,N-1){
		sum -= A[i];
		ans =  (ans + (A[i] * sum) % M) % M;
	}

	cout << ans << endl;





	return 0;

}
