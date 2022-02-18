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

	ll N; cin >> N;
	vector<ll> A(N);
	ll X;

	REP(i,N) cin >> A[i];
	cin >> X;

	ll sum = 0;
	REP(i,N) sum += A[i];

	ll d = X - (X/sum)*sum;

	ll ans;
	REP(i,N){
		d -= A[i];
		if(d < 0){
			ans = N*(X/sum) + i+1;
			break;
		}
	}

	cout << ans << endl;

	return 0;

}
