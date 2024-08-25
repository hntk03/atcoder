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
const int M = 3;

ll calc(ll H){

	ll s = (H-1) / 5;
	ll x = (H+5) - (s * 5);
	ll n = x % 5;
	if(n > 2 or n == 0) n = 3;
	ll ret =  M * s + n;

	return ret;
}

int main(void){

	int N; cin >> N;
	vector<ll> H(N);
	for(ll &h : H) cin >> h;

	ll T = 0;
	REP(i,N){
		if(T%M == 0){
			T += calc(H[i]);
		}else if(T%M == 1){
			T++; H[i]--;
			if(H[i] > 0){
				T++;
				H[i] -= M;
			}
			if(H[i] > 0){
				T += calc(H[i]);
			}
		}else{ // 2
			T++; H[i] -= M;
			if(H[i] > 0){
				T += calc(H[i]);
			}
		}
	}

	cout << T << endl;

	return 0;

}
