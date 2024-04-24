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

	int N;
  ll T;
	cin >> N >> T;

	vector<ll> A(N);
	REP(i,N) cin >> A[i];

	ll sum = 0;
	REP(i,N) sum += A[i];

	ll x = T % sum;

	REP(i,N){
		x -= A[i];
		if(x <= 0){
			int idx = i+1;
			ll s = x += A[i];
			cout << idx << " " << s <<endl;
			break;
		}
	}

	return 0;

}
